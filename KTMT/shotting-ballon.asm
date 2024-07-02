; Nguon: https://github.com/huzaifa-57/Balloon-Shooting-Game-in-Assembly-language-x86/blob/main/Ballon_shooting_game.asm
.model large
.data

    exit db 0
    player_pos dw 1760d                ; Vi tri cua may ban bong

    arrow_pos dw 0d                    ; Vi tri cua mui ten
    arrow_status db 0d                 ; Neu trang thai bang 0 thi moi 
                                       ; ban duoc, nguoc lai khong ban duoc 
    arrow_limit dw  22d                ;150d

    loon_pos dw 3860d                  ;Vi tri cua bong theo cot ngang 3990d
    loon_status db 0d                  ; Neu trang thai bang 0 thi 
                                       ;bong moi xuat hien tiep         
                                       
    direction db 0d                    ;direction of player 
                                       ;up=8, down=2

    state_buf db '00:0:0:0:0:0:00:00$' ; Tao mot vung nho de luu tru thong tin nhu diem so
    hits dw 0d                         ; So luong ban trung
    miss dw 0d                         ; So luong ban truot         
    
    
    
    
                                                                            
    
    ; In diem cua minh sau khi choi  
    ; 0ah dung de xuong dong
    ; 0dh dung de dua con tro vao dau dong
    game_over_str dw '  ',0ah,0dh
    dw '                             |               |',0ah,0dh
    dw '                             |---------------|',0ah,0dh
    dw '                             | ^   Score   ^ |',0ah,0dh
    dw '                             |_______________|',0ah,0dh
    dw ' ',0ah,0dh 
    dw ' ',0ah,0dh
    dw ' ',0ah,0dh
    dw ' ',0ah,0dh
    dw ' ',0ah,0dh
    dw ' ',0ah,0dh
    dw '                                Game Over',0ah,0dh
    dw '                        Press Enter to start again$',0ah,0dh 

    ; In ra giao dien ban dau cua tro choi
    game_start_str dw '  ',0ah,0dh

    dw ' ',0ah,0dh
    dw ' ',0ah,0dh
    dw ' ',0ah,0dh
    dw '                ====================================================', 0ah,0dh
    dw '               ||                                                  ||',0ah,0dh                                        
    dw '               ||       *      Balloon Shooting Game      *        ||',0ah,0dh
    dw '               ||                                                  ||',0ah,0dh
    dw '               ||--------------------------------------------------||',0ah,0dh
    dw '               ||                                                  ||',0ah,0dh
    dw '               ||                                                  ||',0ah,0dh
    dw '               ||                                                  ||',0ah,0dh          
    dw '               ||       Use up and down key to move player         ||',0ah,0dh
    dw '               ||           and space button to shoot              ||',0ah,0dh
    dw '               ||                                                  ||',0ah,0dh
    dw '               ||              Press Enter to start                ||',0ah,0dh 
    dw '               ||                                                  ||',0ah,0dh
    dw '               ||                                                  ||',0ah,0dh
    dw '                ====================================================', 0ah,0dh
    dw '$',0ah,0dh



; Code chinh cua chuong trinh
.code
main proc                               ; Thu tuc ham chinh cua chuong trinh
    ; Khoi tao thanh ghi ds
    mov ax, @data                       ; Dung ax de tro ve vi tri @data 
    mov ds, ax                          ; Gan gia tri trong AX cho DS

    mov ax, 0B800h                      ; Thiet lap AX voi dia chi vung nho hien thi man hinh
    mov es, ax                          ; Gan gia tri trong AX cho ES

    jmp game_menu                       ; Nhay den label game_menu (Hien thi menu chinh)

    main_loop:                          ; Vong lap chinh cua tro choi (Cap nhat logic va hien thi)
        mov ah, 1h                      ; Thiet lap ma lenh AH (kiem tra phim bam)
        int 16h                         ; Goi ngat DOS 16h de kiem tra phim bam
        jnz key_pressed                 ; Neu co phim bam, nhay den label key_pressed
        jmp inside_loop                 ; Neu khong co phim bam, nhay den label inside_loop (Tiep tuc vong lap)

    inside_loop:                        ; Kiem tra cac yeu to trong tro choi

        cmp miss, 9                     ; So sanh bien "miss" voi 9 (Kiem tra neu bong bay truot 9 lan)
        jge game_over                   ; Neu miss >= 9, nhay den label game_over (Ket thuc tro choi)

        mov dx, arrow_pos               ; Gan gia tri cua bien "arrow_pos" cho DX (Vi tri mui ten)
        cmp dx, loon_pos                ; So sanh DX (vi tri mui ten) voi loon_pos (vi tri bong bay)
        je hit                          ; Neu trung khop, nhay den label hit (Xu ly va cham)

        cmp direction, 8d               ; So sanh bien "direction" voi 8d (Kiem tra huong di chuyen)
        je player_up                    ; Neu direction == 8d, nhay den label player_up (Di chuyen len)
        cmp direction, 2d               ; Neu direction == 2d, nhay den label player_down (Di chuyen xuong)
	    je player_down

        mov dx, arrow_limit             ; Gan gia tri cua bien "arrow_limit" cho DX (Gioi han hien thi mui ten)
        cmp arrow_pos, dx               ; So sanh DX (vi tri mui ten) voi gioi han
        jge hide_arrow                  ; Neu arrow_pos >= arrow_limit, nhay den label hide_arrow (An mui ten)

        cmp loon_pos, 0d                ; So sanh bien "loon_pos" voi 0d (Kiem tra neu bong bay cham day)
        jle miss_loon                   ; Neu loon_pos <= 0d, nhay den label miss_loon (Bong bay truot)
        jne render_loon                 ; Neu khong, nhay den label render_loon (Hien thi bong bay)    
                                                                                                        
    hit:                                ; Phat am thanh khi trung
        mov ah,2
        mov dx, 7d                      ; 7d la ma ascii phat ra am thanh canh bao
        int 21h 
            
        inc hits                        ; Cap nhat lai so diem 
            
                                        ; In so diem ra man hinh
        lea bx,state_buf                ; Dat dia chi state_buf vao thanh ghi bx
        call show_score                 ; Goi ham show_scre
        lea dx,state_buf                ; Dat dia chi state_buf vao thanh ghi bx
        mov ah,09h                      ; Hien thi chuoi
        int 21h
            
        mov ah,2                        ; dung ham 2 cua ngat 21 de in ra 1 ki tu
        mov dl, 0dh                     ; in ra ki tu xuong dong va thut vao 1 dau dong
        int 21h    
            
        jmp fire_loon                   ; Tao ra bong moi
    
    render_loon:                        ; Dung de ve bong
        mov cl, ' '                     ; Dung de an bong cu di
        mov ch, 1111b                   ; Them mau sac cho qua bong
        
        mov bx,loon_pos                 ; Dat vi tri bong vao bx
        mov es:[bx], cx                 ; Ghi de cx vao doan es de tao mau sac va ghi de khoang trang
                
        sub loon_pos,160d               ; Thay doi vi tri cua bong
        mov cl, 15d                     ; Dat gia tri 15d vao thanh ghi cl de ve bong moi
        mov ch, 1101b                   ; Thiet lap thuoc tinh lai cho bong, mau sac mau hong
        
        mov bx,loon_pos                 ; Dat dia chi bong vao bx
        mov es:[bx], cx                 ; Luu gia tri cua cx vao vi tri trong doan es boi con tro bx
                                        
        cmp arrow_status,1d             ; Kiem tra trang thai cua bong voi 1d
        je render_arrow                 ; Neu bang thi ve mui ten
        jne inside_loop2 
        
    render_arrow:                       ; Tao mui ten
        mov cl, ' '                     ; Dat khoang trang vao thanh ghi cl de an mui ten
        mov ch, 1111b                   ; Dat gia tri 1111b vao thanh ghi ch de thiet lap thuoc tinh
        
        mov bx,arrow_pos                ; An vi tri bong cu di
        mov es:[bx], cx
               
        add arrow_pos,4d                ; Cong 4 don vi trong de thay doi vi tri mui ten
        mov cl, 26d                     ; Dat 26d cho thanh cl de ve mui ten moi
        mov ch, 1001b                   ; Dat 10001b vao thanh ghi ch de thiet lap thuoc tinh mau sac
        
        mov bx,arrow_pos                ; Dat vi tri mui ten vao thanh ghi bx
        mov es:[bx], cx                 ; Luu gia tri cx trong doan es tro boi bx     
              
    inside_loop2:
            
        mov cl, 125d                    ; Dat 125d vao thanh ghi cl de ve nguoi choi
        mov ch, 1100b                   ; Dat 1100b vao thanh ghi ch de thiet lap thuoc tinh mau sac
            
        mov bx,player_pos               ; Dat dia chi cua vi tri nguoi choi vao thanh ghi bx
        mov es:[bx], cx                 ; Luu gia tri cx trong doan es tro toi bx
            
             
                                        ; So sanh exit voi 0
        cmp exit,0                          ; Neu exit bang thi nhay den main_loop
        je main_loop                        ; Ket thuc vong lap
        jmp exit_game
 
        jmp inside_loop2                          ; Nhay den inside_loop2
    
    player_up:                               
        mov cl, ' '                           ; Dat khoang trang vao thanh ghi cl de an nguoi choi
        mov ch, 1111b                         ; Dat 1111b vao ch de thiet lap thuoc tinh
            
        mov bx,player_pos                     ; Gan bx cho vi tri nguoi choi
        mov es:[bx], cx                       ;an vi tri cu cua nguoi choi
        
        sub player_pos, 160d                  ;set vi tri moi cho nguoi choi
        mov direction, 0    
    
        jmp inside_loop2                      ;goi ham inside_loop2 ve vi tri moi
        
    player_down:
        mov cl, ' '                           
        mov ch, 1111b                         
                                              
        mov bx,player_pos 
        mov es:[bx], cx                       ;an vi tri cu cua nguoi choi
        
        add player_pos,160d                   ;set vi tri moi cho nguoi choi 
        mov direction, 0
        
        jmp inside_loop2                      ;goi ham inside_loop2 ve vi tri moi
    
    key_pressed:                              ;xu li input cua nguoi choi
        mov ah,0
        int 16h                               ;lenh ngat int 16h lang nghe input ban phim
    
        cmp ah,48h                            ;phim mui ten len tren
        je upKey
        cmp ah, 50h                           ;phim mui ten xuong duoi
        je downKey
        
        cmp ah,39h                            ;phim cach
        je spaceKey
        
        cmp ah,4Bh                            ;phim mui ten sang trai
        je leftKey
         
                                              
        jmp inside_loop                       ;neu khong co nut nao duoc bam, goi ham inside_loop
    
    leftKey:                                  ;dung de thoat game
        jmp game_over                         ;goi ham game_over
        inc miss                              ;tang bien miss len 1 
                                              ;hien thi diem hien tai
        lea bx,state_buf                      ;gan BX = dia chi cua state_buf
        call show_score                       ;goi ham show_score
        lea dx,state_buf                      ;gan DX = dia chi cua state_buf
        mov ah,09h                            ;gan AH = 9H
        int 21h                               ;lenh ngat int21 AH = 9 in ra man hinh chuoi ki tu DX
        
        mov ah,2                              ;gan AH = 2H
        mov dl, 0dh                           ;gan DL = dH
        int 21h                               ;lenh ngat int21 AH = 2 in ra man hinh 1 ki tu DL
        jmp inside_loop                           ;goi ham inside_loop
        
    upKey:                                    ;set huong cua nhan vat len tren
        mov direction, 8d
        jmp inside_loop
    
    downKey:
        mov direction, 2d                     ;set huong cua nhan vat xuong duoi
        jmp inside_loop
        
    spaceKey:                                 ;ban mui ten
        cmp arrow_status,0                    ;kiem tra trang thai cua mui ten
        je  fire_arrow                        ;neu arrow_status == 0, ban ten
        jmp inside_loop                       ;nguoc lai, quay tro lai inside_loop
    
    fire_arrow:                               ;set vi tri cua arrow giong voi vi tri cua nhan vat
        mov dx, player_pos                    ;de mui ten duoc ban ra tu nhan vat
        mov arrow_pos, dx
        
        mov dx,player_pos                     ;Gan dx cho vi tri cua nguoi choi
        mov arrow_limit, dx                   ;Gan gioi han mui ten cho dx
        add arrow_limit, 22d  ;150            ;Them gioi han cua mui ten 22d
        
        mov arrow_status, 1d                  ;set trang thai arrow_status sang 1, khong cho phep ban nhieu lan, can co thoi gian nghi  
        jmp inside_loop                       ;goi ham inside_loop
    
    miss_loon:
        add miss,1                            ;tang bien miss len 1
                                              ;hien thi diem hien tai
        lea bx,state_buf                      ;gan BX = dia chi cua state_buf
        call show_score                       ;goi ham show_score
        lea dx,state_buf                      ;gan DX = dia chi cua state_buf
        mov ah,09h                            ;gan AH = 9H
        int 21h                               ;lenh ngat int21 AH = 9 in ra man hinh chuoi ki tu DX
                                              ;xuong dong
        mov ah,2                              ;gan AH = 2H
        mov dl, 0dh                           ;gan DL = 0dH
        int 21h                               ;lenh ngat int21 AH = 2 in ra man hinh 1 ki tu DL
        jmp fire_loon
        
    fire_loon:                                ;ban ra qua bong moi
        mov loon_status, 1d                   ;gan trang thai loon_status = 1
        mov loon_pos, 3860d                   ;gan vi tri loon_pos = 3860d
        jmp render_loon                       ;goi ham render_loon
        
    hide_arrow:
        mov arrow_status, 0                   ;gan trang thai arrow_status = 0
        
        mov cl, ' '                           ;an mui ten
        mov ch, 1111b
        
        mov bx,arrow_pos 
        mov es:[bx], cx                       ;set vi tri moi cho mui ten
        
        cmp loon_pos, 0d                      ;kiem tra vi tri qua bong voi 0 
        jle miss_loon                         ;neu vi tri <= 0, goi miss_loon
        jne render_loon                       ;neu vi tri != 0, goi render_loon
        
        jmp inside_loop2                      ;goi ham inside_loop2  
        
    ;print game over screen
    
    game_over:
        mov ah,09h                         ;Di chuyen gia tri 9(thap phan) vao thanh ghi AH
        mov dx, offset game_over_str       ;Di chuyen dia chi offset game_over_str vao thanh ghi DX
        int 21h                            ;Su dung ham 9 cua ngat INT 21H
        
        
        ;An quang bong tren man hinh
        mov cl, ' '                        ;Di chuyen ky tu ' ' vao thanh ghi CL     
        mov ch, 1111b                      ;Di chuyen gia tri nhi phan 1111(thap phan 15) vao thanh ghi CH
        mov bx,arrow_pos                   ;Di chuyen gia tri bien arrow_pos vao thanh ghi BX     
        
        
        ;An nguoi choi di                                   
        mov cl, ' '                        ;Di chuyen ky tu ' ' vao thanh ghi CL 
        mov ch, 1111b                      ;Di chuyen gia tri nhi phan 1111(thap phan 15) vao thanh ghi CH
        mov bx,player_pos                  ;Di chuyen gia tri bien player_pos vao thanh ghi BX
     
        
        ; Cap nhat lai cac bien ban dau                      
        mov miss, 0d                       ;Khoi tao bien miss voi gia tri '0' dai dien cho so muc tieu bo lo
        mov hits,0d                        ;Khoi tao bien hits voi gia tri '0' dai dien cho so lan ban trung
        
        mov player_pos, 1760d              ;Khoi tao bien miss voi gia tri '0' dai dien cho vi tri nguoi choi
    
        mov arrow_pos, 0d                  ;Khoi tao bien arrow_pos voi gia tri '0' dai dien cho vi tri cua 
                                           ;mui ten do nguoi choi ban ra
        mov arrow_status, 0d               ;Khoi tao bien arrow_status voi gia tri '0' dai dien cho trang thai cua 
                                           ; mui ten (0: chua ban, gia tri khac: dang bay)
        mov arrow_limit, 22d      ;150d    ;Khoi tao bien arrow_limit voi gia tri '22' dai dien cho tam ban toi da cua mui ten
    
        mov loon_pos, 3860d       ;3990d   ;Khoi tao bien loon_pos voi gia tri 3860 dai dien cho vi tri ban dau cua muc tieu
        mov loon_status, 0d                ;Khoi tao bien loon_status voi gia tri 0 dai dien cho trang thai cua muc tieu 
             
        mov direction, 0d                  ;Khoi tao bien direction voi gia tri 0 dai dien cho huong di chuyen cua vat the 
                                       
    ;Doi nguoi dung nhap vao                                     
    input:
        mov ah,1                       ;Di chuyen gia tri 1 vao thanh ghi AH 
        int 21h                        ;Su dung ham 1 cua ngat INT 21H
        cmp al,13d                     ;So sanh gia tri thanh ghi AL voi 13
        jne input                      ;Neu khong bang thi quay lai INPUT
        call clear_screen              ;Goi chuong trinh con clear_screen de xoa man hinh
        jmp main_loop                  ;Nhay den chuong trinh con main_loop
    


    ;Hien thi menu
    game_menu:
                                           
        mov ah,09h                     ;Di chuyen gia tri 9 vao thanh ghi AH
        mov dh,0                       ;Di chuyen gia tri 0 vao thanh ghi DH
        mov dx, offset game_start_str  ;Di chuyen gia tri trong bien offset game_start_str 
                                       ;vao thanh ghi DX
        int 21h                        ;Su dung ham 9 cua ngat INT 21H
                                                                   
    ;Doi nguoi choi nhap vao
    input2:
        mov ah,1                       ;Di chuyen gia tri 1 vao thanh ghi AH
        int 21h                        ;Su dung ham 1 ngat INT 21H
        cmp al,13d                     ;So sanh gia tri thanh ghi AL voi 13
        jne input2                     ;Neu bang nhau thi nhay den nhan input2
        call clear_screen              ;Goi chuong trinh con xoa man hinh
        
    ;Hien thi diem cua tro choi   
        lea bx,state_buf               ;Tai dia chi bo nho cua bien state_buf vao thanh ghi BX    
        call show_score                ;Goi chuong trinh con show_score
        lea dx,state_buf               ;Tai dia chi bo nho cua bien state_buf vao thanh ghi DX
        mov ah,09h                     ;Di chuyen gia tri 9 vao thanh ghi AH
        int 21h                        ;Su dung ham 9 cua ngat INT 21H  
        
    ; Dung de xoa di phan hien thi hit va miss de hien thi lan tiep theo
        mov ah,2                       ;Di chuyen gia tri 2 vao thanh ghi AH
        mov dl, 0dh                    ;Di chuyen gia tri 0dh(ma thap luc phan) vao thanh ghi DL
        int 21h                        ;Su dung ham 2 cua ngat INT 21H
        
        jmp main_loop                  ;Nhay den nhan main_loop

    ;Ket thuc tro choi
    exit_game:                             
        mov exit,10d                           ;Di chuyen gia tri 10 vao bien exit

main endp


       ;Chuong trinh con show_score
proc show_score
    lea bx,state_buf                   ;Tai dia chi bo nho cua state_buf len thanh ghi BX
    
    ;Hien thi ra man hinh so muc tieu ban trung  
    mov dx, hits                       
    add dx,48d                        
    mov [bx], 9d
    mov [bx+1], 9d
    mov [bx+2], 9d
    mov [bx+3], 9d
    mov [bx+4], 'H'
    mov [bx+5], 'i'                                        
    mov [bx+6], 't'
    mov [bx+7], 's'
    mov [bx+8], ':'
    mov [bx+9], dx
    
    ;Hien thi ra man hinh so muc tieu bo lo
    mov dx, miss                      
    add dx,48d
    mov [bx+10], ' '
    mov [bx+11], 'M'
    mov [bx+12], 'i'
    mov [bx+13], 's'
    mov [bx+14], 's'
    mov [bx+15], ':'
    mov [bx+16], dx
ret    
show_score endp 
       
       
       ;Chuong trinh con xoa man hinh
clear_screen proc near
        mov ah,0             ;Di chuyen gia tri 0 vao thanh ghi AH
        mov al,3             ;Di chuyen gia tri 3 vao thanh ghi AL
        int 10h              ;Su dung ngat 10   
        ;Voi AH = 0 v� AL = 3, BIOS su thiet lap che do video th�nh  
        ;che do van ban 80x25 voi 16 m�u de xoa man hinh
        ret                            ;Tra ve ket qua
clear_screen endp

end main
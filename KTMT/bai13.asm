;viet chuong trinh hop ngu assembly cho phep nhap vao cac so va in ra man hinh tong cac so do 

.Model Small ; che do bo nho la small
.Stack 100H  ; Kic thuoc cua ngan xep
.Data
    ; Khai bao bien va ca hang
    crlf db 13, 10, '$'                 ;xuong dong va lui vao dau dong
    base_dec dw 10                      ; khai bao base_dec gia tri bang 10
    len db 'Nhap so luong cac so: $'    ;Mot chuoi in ra so luong cac so 
    strSum db 13, 10, 'Tong cac so: $'  ; Mot chuoi in ra tong cac so
    x dw 0                              ; khai bao x co gia tri bang 0
    SUM dw 0                            ; khai bao bien sum co gia tri bang 0 

     
.Code
Main Proc ; Thu tuc cua ham chinh chuong trinh
    ; Khoi tao cho thanh ghi DS   
   mov ax, @data                        ; Su dung Ã de tro ve vi tri @Data
   mov ds, ax                           ; DS gan gia tri bang ax
             
   ; Code chinh cua chuong trinh
   ; Su dung ham in ra man hinh cua ngat INT 21H va ham nay su dung la ham 9          
   mov ah, 9                            ; Lenh goi ham 09h cua ngat 21 in ra moi chuoi ki tu
   lea dx, len                          ; load effective address
   int 21h
   
   call input                           ; Goi ham input
   mov cx, x                            ; Gan gia tri cx cho x
   
   mov ah, 9                            ; Lenh goi ham 09h cua ngat 21
   lea dx, crlf                         ; xuong dong
   int 21h 
   
    
   
input_array:                            ; Vong lap
   call input                           ; Goi ham input
   mov ax, SUM                          ; Gan gia tri sum cho ax
   add ax, x                            ; Them x voa ax
   mov SUM, ax                          ; Gan gia tri ax cho sum
   loop input_array                     ; Goi lai vong lap
   
   
   mov ah, 9                            ; Lenh goi ham ngat 09 cua ngat 21 in ra 1 chuoi ki tu
   lea dx, strSum                       ; In ra chuoi strSum
   int 21h
   call Output                          ; Goi gam Output
   
   
   mov ah, 4ch                          ; Lenh goi ham ngat 4ch cua ngat 21 de ket thuc chuong trinh
   int 21h
   
Main endp                               ; Ket thuc ham main

Input Proc                              ; Thu tuc cua ham input
    mov x, 0                            ; Gan gia tri x bang 0
loop_input:
    mov ah, 1                           ; Goi ham ngat 01 de nhap 1 ki tu
    int 21h
    cmp al, 13                          ; So sanh ki tu vua nhap voi ki tu xuong dong
    je end_input                        ; neu dung nhay len end_input
    cmp al, ' '                         ; So sanh ki tu vua nhap voi dau ' '
    je end_input                        ; Neu dung nhay len end_input
    mov ah, 0                           ; Gan gia tri ah bang 0
    sub al, '0'                         ; Tru al di ki tu '0' de lay gia tri so
    push ax                             ; Day ax len ngan xep
    mov ax, x                           ; Gan ax bang x
    mul base_dec                        ; Nhan ax voi base_dec
    mov x, ax                           ; Gan x cho gia tri ax
    pop ax                              ; Lay ax tu ngan xep ra
    add x, ax                           ; Them ax vao x
    jmp loop_input                      ; nhay quay lai loop_input
end_input:
    ret                                 ; Quay tro lai noi minh da gop ham nay
    
        
Input Endp                              ; thu tuc ket thuc cua ham input

Output Proc                             ; thu tuc bat dau cua ham output 
   mov ax, SUM                          ; Gan gia tri ax cho sum
   mov cx, 0                            ; Gan gia tri cx bang 0
Divide:
    mov dx, 0                           ; Gan gia tri dx bang 0
    div base_dec                        ; Lay thanh ghi ax chia cho 10 
    push dx                             ; Day dx len hang doi
    inc cx                              ; Tang cx len 1 don vi
    cmp ax, 0                           ; So sanh ax voi 0
    je show                             ; Neu ax bang 0 thi nhay den show
    jmp Divide                          ; Nhay den divide
show:
    mov ah, 2                           ; Ham ngat 02 hien thi ki tu trong thanh ghi dl
    pop dx                              ; Day lay dx tu hang doi ra
    add dl, '0'                         ; Them dl vao ki tu '0' de chuyen sang so sang ki tu
    int 21h                             ; In ra ki tu dl
    dec cx                              ; Giam cx xuong 1 don vi
    cmp cx, 0                           ; So sanh cx voi 0
    jne show                            ; Neu cx khong bang 0 thi nhay quay lai show
ret                                     ; tro ve noi da goi ham nay
    
Output Endp                             ; Thu tuc de ket thuc ham Output

END MAIN                                ; Ket thuc chuong trinh
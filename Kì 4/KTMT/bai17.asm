; chuong trinh nhap 10 so nguyen co 2 chu so. In ra tong cac so chia het cho 7
.model small   ; che bo bo nho la small
.stack 100h    ; Kich thuoc cua ngan xep
.data                 
     ; Khai bao bien va ca hang
     strIn db "nhap mang 10 so nguyen: $"         ; Loi dan de nhap so
     strOut db "Tong cac so chia het cho 7 la: $" ; Loi dan in ra tong cac so
     crlf db 13, 10, '$'  ; In ra dau xuong dong va lui vao dau dong
     x dw 0               ; Khoi tao bien x co gia tri bang 0
     sum dw 0             ; Khoi tao bien y co gia tri bang 0
     base_dec dw 10       ; Khoi tao bien base_dec co gia tri bang 10
.code
Main proc                 ; Thu tuc cua ham chinh chuong trinh
    ; KHoi tao cho thanh ghi ds
    mov ax, @data         ; Su dung ax de tro ve vi tri @data
    mov ds, ax            ; ds gan gia tri bang ax
    
    ; Code chinh cua chuong trinh
    mov ah, 9             ; Lenh goi hamg 09h cua ngat 21 in ra chuoi ki tu
    lea dx, strIn         ; load effective address
    int 21h
    
    lea dx, crlf          ; load effective address
    int 21h 
    mov cx, 10            ; Gan cx bang 10 de so vong lap la 10
                          
input_array:              ; Vong lap nhap va tinh tong cac so chia het cho 7
    call input            ; Goi ham input de nhap so
    mov ax, x             ; Gan gia tri x cho ax
    mov dh, 0             ; Gan gia tri dh bang 0
    mov dl, 7             ; Gan gia tri dl bang 7
    div dl                ; Chia ax cho dl
    cmp ah, 0             ; Phan du luu vao ah, so sanh ah voi 0
    jne continue          ; Neu khong bang thi nhay de continue
    mov ax, sum           ; Gan gia tri sum cho ax
    add ax, x             ; Them x vao ax
    mov sum, ax           ; Gan gia tri ax cho sum
    
continue:
    loop input_array      ; Vong lap quay lai input_array
      
    mov ah, 9             ; Su dung ham ngat 09 cua ngat 21h de in ra 1 chuoi
    lea dx, strOut        ; load effective address
    int 21h
    
    call Output           ; Goi ham output de in ra gia tri tong
    
    mov ah, 4ch           ; Su dung ham ngat 4ch cua 21h de ket thuc chuong trinh
    int 21h
    
Main endp                 ; Thu tuc ket thuc ham main

Input proc                ; Thu tuc bat dau ham input
    mov x, 0              ; Gan gia tri x bang 0 
enter_input:              
    mov ah, 1             ; Goi ham 01 cua ngat 21h de nhap vao 1 ki tu luu vao trong al
    int 21h
    cmp al, 13            ; So sanh al voi ki tu rong
    je exit               ; Neu al la ki tu rong thi nhay den exit
    cmp al, ' '           ; So sanh al voi ki tu ' '
    je exit               ; Neu al bang voi ki tu ' ' thi nhay den exit
    mov ah, 0             ; Gan gia tri ah bang 0
    sub al, '0'           ; Tru al di ki tu '0' de duoc so
    push ax               ; Day ax len hang doi
    mov ax, x             ; Gan gia tri x cho ax
    mul base_dec          ; Nhan ax voi base_dec voi base_dec bang 10
    mov x, ax             ; Gan gia tri ax cho x
    pop ax                ; Lay ax ra tu ngan xep
    add x, ax             ; Them ax voi x
    jmp enter_input       ; Nhay quay lai enter_input
exit:
    ret                   ; Nhay den noi ma da goi ham input
Input endp                ; Thu tuc ket thuc ham input
                 
Output Proc               ; Thu tuc de bat dau ham output
    mov x, 0              ; Gan gia tri x bang 0
    mov ax, sum           ; Gan gia tri ax bang sum
    ; Dung de lay lan luot cac chu so cua sum roi day len hang doi
divide:
    mov dx, 0             ; Gan gia tri dx bang 0
    div base_dec          ; Chia ax cho base_dec voi base_dec bang 10
    push dx               ; So du luu vao dx, day dx len ngan xep
    inc x                 ; Tang x len 1 don vi
    cmp ax, 0             ; So sanh ax voi gia tri 0
    je print_output       ; Nhay den print_output neu ax bang 0
    jmp divide            ; Nhay den divide 
    ; Lay lan luot cac chu so cua x tren hang doi roi in ra
print_output:
    dec x                 ; Giam x di 1 don vi
    pop dx                ; Lay dx tu tren hang doi ra
    mov ah, 2             ; Goi ham 02 cua ngat 21h de in ra ki tu
    add dl, '0'           ; Them dl vao '0' de chuyen so sang ki tu
    int 21h
    cmp x, 0              ; So sanh x voi gia tri 0
    jne print_output      ; Nhay den print_output neu x khong bang 0
ret                       ; Nhay den noi da goi ham output

Output endp               ; Thu thuc de ket thuc ham output

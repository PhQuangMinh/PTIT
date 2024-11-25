; Viet chuong trinh hop ngu Assembly cho phep nhap 1 chuoi ky tu, 
;in ra man hinh chuoi ki tu do theo dang viet hoa va viet thuong

.model small   ; Che do bo nho la Small
.stack 100h    ; Kich thuoc cua ngan xep 

.data      
    ; Khai bao cac bien va cac hang
    str db 20 dup('$')  ; Khai bao chuoi cac ki tu co kich thuoc 20 va toan ki tu $
    crlf db 13, 10, '$' ; Khi bao chuoi de in xuong dong  
    strNhap db 'Nhap chuoi: $'
    strThuong db 'Chuoi in thuong: $'
    strHoa db 'Chuoi in hoa: $' 
    
.code

main proc          ; thu tuc cua ham chinh chuong trinh      
    ; Khoi tao cho thanh ghi DS
    mov ax, @data       ; Su dung ax de tro ve vi tri data
    mov ds, ax          ; ds gan gia tri cho ax               
    
    mov ah, 9           ; Goi ham ngat 09 de in ra mot chuoi ki tu   
    lea dx, strNhap      ; In ra chuoi strNhap
    int 21h  
    
    mov ah, 10          ; Goi ham ngat 10 de nhap 1 chuoi ki tu
    lea dx, str         ; load effective address
    int 21h 
        
    mov ah, 9    
    lea dx, crlf        ; In ra ki tu xuong dong
    int 21h
    
    mov ah, 9           ; Goi ham ngat 09 de in ra mot chuoi ca ki tu 
    lea dx, strThuong   ; load effective address, in ra strThuong
    int 21h
                      
    lea si, str+2       ; gan si cho vi tri thu 2 trong chuoi str
    mov ah, 2           ; Goi ham ngat 02 de in ra ki tu trong thanh ghi dl
    call print_lower    ; Goi ham print_lower
               
    mov ah, 9           ; Goi ham ngat 09 de in ra mot chuoi ki tu
    lea dx, crlf        ; in ra ki tu xuong dong
    int 21h
    
    mov ah, 9           ; Goi ham ngat 09 de in ra mot chuoi ca ki tu 
    lea dx, strHoa      ; load effective address, in ra strHoa
    int 21h
    
    lea si, str+2       ; Gan si cho vi tri thu 2 trong chuoi str
    mov ah, 2           ; Goi ham ngat 02 de in ra ki tu trong thanhg ghi dl
    call print_upper    ; Goi ham print_upper
    
    mov ah, 4ch         ; Goi ham ngat 4ch de ket thuc chuong trinh
    int 21h
    
main endp

print_lower proc
    loop_lower:
        mov dl, [si]    ; Gan gia tri dl cho ki tu thu si
        cmp dl, '$'     ; So sanh dl voi ki tu $
        je end_lower    ; Neu bang thi nhay den end_lower
        cmp dl, 'A'     ; So sanh dl voi gia tri 'A'
        jl print        ; Neu nho hon thi nhay den print
        cmp dl, 'Z'     ; So sanh dl voi gia tri 'Z'
        jg print        ; Neu lon hon thi nhay den print
        add dl, 32      ; Cong dl voi 32 de chuyen hoa sang thuong
    print:
        int 21h         ; In ra ki tu dl
        inc si          ; Tang si len 1 don vi
        loop loop_lower ; Nhay quay lai loop_lower
    end_lower:
        ret             ; Nhay quay lai noi da goi ham nay
print_lower endp        ; Thu tuc de ket thuc ham print_lower

print_upper proc
    loop_upper:
        mov dl, [si]    ; Gan gia tri vi tri si trong mang cho dl
        cmp dl, '$'     ; So sanh dl voi ki tu $
        je end_upper    ; Neu bang thi nhay den end_lower
        cmp dl, 'a'     ; So sanh dl voi gia tri 'a'
        jl print_up     ; Neu nho hon thi nhay den print_up
        cmp dl, 'z'     ; So sanh dl voi gia tri 'z'
        jg print_up     ; Neu lon hon thi nhay den print_up
        sub dl, 32      ; Tru dl voi 32 de chuyen hoa sang thuong
    print_up:
        int 21h         ; In ra ki tu
        inc si          ; Tang si len 1 don vi
        loop loop_upper ; Quay tro lai loop_upper
    end_upper:
        ret             ; Quay tro lai noi da goi ham
print_upper endp        ; Thuc tuc ket thuc ham print_upper
        
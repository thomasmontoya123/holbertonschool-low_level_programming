section .data

msg db "Hello, Holberton", 0x0a ; 0x0a means new line inascii
.size equ $ - msg

section .text
	global main
	main:
		mov rax, 1		; call for write
		mov rdi, rdi		; standard out
		mov rsi, msg		; msg address
		mov rdx, msg.size	; size of msg
		syscall			; kernel invocation for write
		mov rax, 60		; exit call
		mov rdi, 0		; exit code
		syscall			; invoke for exit

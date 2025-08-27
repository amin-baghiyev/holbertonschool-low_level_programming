segment .data
message db 'Hello, World', 0xa

segment .text
	global main

main:
	mov edx, 13
	mov ecx, message
	mov ebx, 1
	mov eax, 4
	int 0x80

	mov eax, 1
	int 0x80

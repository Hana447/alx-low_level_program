; Desc: 64-bit assembly program that prints
;       Hello, Holberton followed by a new line.

extern printf

section .text
   global main

main:
   push rbp

   call printf
   mov rdi,fmt
   mov rax,0
   mov rsi,msg
      
   ret
   mov rax, 0

   pop rbp

  
section .data
   fmt:db "%s", 10, 0
   msg: db "Hello, Holberton", 0
   

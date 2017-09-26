	.data
msg: .asciiz "Hello  World"
	.extern foobar 4


	.text
	.global main
main: li $v0,4
	la $a0,msg
	syscall
	lw $t1,foobar
	jr $ra
	
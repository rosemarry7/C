	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 10, 14
	.globl	_main                   ## -- Begin function main
	.p2align	4, 0x90
_main:                                  ## @main
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$48, %rsp
	leaq	L_.str(%rip), %rdi
	movl	$0, -4(%rbp)
	movl	$2147483647, -8(%rbp)   ## imm = 0x7FFFFFFF
	movl	-8(%rbp), %eax
	shll	$1, %eax
	addl	$1, %eax
	movl	%eax, -12(%rbp)
	movl	-8(%rbp), %esi
	movl	-8(%rbp), %eax
	addl	$1, %eax
	movl	-8(%rbp), %ecx
	addl	$2, %ecx
	movl	%eax, %edx
	movb	$0, %al
	callq	_printf
	leaq	L_.str.1(%rip), %rdi
	movl	-12(%rbp), %esi
	movl	-12(%rbp), %ecx
	addl	$1, %ecx
	movl	-12(%rbp), %edx
	addl	$2, %edx
	movl	%edx, -20(%rbp)         ## 4-byte Spill
	movl	%ecx, %edx
	movl	-20(%rbp), %ecx         ## 4-byte Reload
	movl	%eax, -24(%rbp)         ## 4-byte Spill
	movb	$0, %al
	callq	_printf
	leaq	L_.str.2(%rip), %rdi
	leaq	-16(%rbp), %rsi
	movl	%eax, -28(%rbp)         ## 4-byte Spill
	movb	$0, %al
	callq	_scanf
	leaq	L_.str.3(%rip), %rdi
	movl	-16(%rbp), %esi
	movl	%eax, -32(%rbp)         ## 4-byte Spill
	movb	$0, %al
	callq	_printf
	xorl	%ecx, %ecx
	movl	%eax, -36(%rbp)         ## 4-byte Spill
	movl	%ecx, %eax
	addq	$48, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.section	__TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
	.asciz	"%d %d %d\n"

L_.str.1:                               ## @.str.1
	.asciz	"%u %u %u\n"

L_.str.2:                               ## @.str.2
	.asciz	"%d"

L_.str.3:                               ## @.str.3
	.asciz	"%c"


.subsections_via_symbols

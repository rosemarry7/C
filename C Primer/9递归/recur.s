	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 10, 14	sdk_version 10, 14
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
	movl	$1, %edi
	callq	_up_and_down
	xorl	%eax, %eax
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.globl	_up_and_down            ## -- Begin function up_and_down
	.p2align	4, 0x90
_up_and_down:                           ## @up_and_down
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movl	%edi, -4(%rbp)
	movl	-4(%rbp), %esi
	leaq	L_.str(%rip), %rdi
	leaq	-4(%rbp), %rdx
	movb	$0, %al
	callq	_printf
	movl	$4, %esi
	movl	%esi, %ecx
	movl	-4(%rbp), %esi
	leaq	L_.str.1(%rip), %rdi
	leaq	-4(%rbp), %rdx
	movl	%eax, -8(%rbp)          ## 4-byte Spill
	movb	$0, %al
	callq	_printf
	cmpl	$4, -4(%rbp)
	movl	%eax, -12(%rbp)         ## 4-byte Spill
	jge	LBB1_2
## %bb.1:
	movl	-4(%rbp), %eax
	addl	$1, %eax
	movl	%eax, %edi
	callq	_up_and_down
	movl	-4(%rbp), %esi
	leaq	L_.str(%rip), %rdi
	leaq	-4(%rbp), %rdx
	movb	$0, %al
	callq	_printf
	movl	%eax, -16(%rbp)         ## 4-byte Spill
LBB1_2:
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.section	__TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
	.asciz	"Level %d: n location %p \n"

L_.str.1:                               ## @.str.1
	.asciz	"Level %d: n location %p : munbers: %lu \n"


.subsections_via_symbols

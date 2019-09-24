	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 10, 14
	.section	__TEXT,__literal8,8byte_literals
	.p2align	3               ## -- Begin function main
LCPI0_0:
	.quad	4633978836582871859     ## double 62.399999999999999
	.section	__TEXT,__text,regular,pure_instructions
	.globl	_main
	.p2align	4, 0x90
_main:                                  ## @main
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$128, %rsp
	leaq	L_.str(%rip), %rdi
	movq	___stack_chk_guard@GOTPCREL(%rip), %rax
	movq	(%rax), %rax
	movq	%rax, -8(%rbp)
	movl	$0, -52(%rbp)
	movb	$0, %al
	callq	_printf
	leaq	L_.str.1(%rip), %rdi
	leaq	-48(%rbp), %rsi
	movl	%eax, -72(%rbp)         ## 4-byte Spill
	movb	$0, %al
	callq	_scanf
	leaq	L_.str.2(%rip), %rdi
	leaq	-48(%rbp), %rsi
	movl	%eax, -76(%rbp)         ## 4-byte Spill
	movb	$0, %al
	callq	_printf
	leaq	L_.str.3(%rip), %rdi
	leaq	-56(%rbp), %rsi
	movl	%eax, -80(%rbp)         ## 4-byte Spill
	movb	$0, %al
	callq	_scanf
	leaq	L_.str.4(%rip), %rdi
	leaq	-48(%rbp), %rsi
	movsd	LCPI0_0(%rip), %xmm0    ## xmm0 = mem[0],zero
	movl	$40, -64(%rbp)
	movq	%rdi, -88(%rbp)         ## 8-byte Spill
	movq	%rsi, %rdi
	movl	%eax, -92(%rbp)         ## 4-byte Spill
	movsd	%xmm0, -104(%rbp)       ## 8-byte Spill
	movq	%rsi, -112(%rbp)        ## 8-byte Spill
	callq	_strlen
	movl	%eax, %ecx
	movl	%ecx, -68(%rbp)
	movss	-56(%rbp), %xmm0        ## xmm0 = mem[0],zero,zero,zero
	cvtss2sd	%xmm0, %xmm0
	movsd	-104(%rbp), %xmm1       ## 8-byte Reload
                                        ## xmm1 = mem[0],zero
	divsd	%xmm1, %xmm0
	cvtsd2ss	%xmm0, %xmm0
	movss	%xmm0, -60(%rbp)
	movss	-60(%rbp), %xmm0        ## xmm0 = mem[0],zero,zero,zero
	cvtss2sd	%xmm0, %xmm0
	movq	-88(%rbp), %rdi         ## 8-byte Reload
	movq	-112(%rbp), %rsi        ## 8-byte Reload
	movb	$1, %al
	callq	_printf
	leaq	L_.str.5(%rip), %rdi
	movl	-68(%rbp), %esi
	movl	%eax, -116(%rbp)        ## 4-byte Spill
	movb	$0, %al
	callq	_printf
	leaq	L_.str.6(%rip), %rdi
	movl	-64(%rbp), %esi
	movl	%eax, -120(%rbp)        ## 4-byte Spill
	movb	$0, %al
	callq	_printf
	movq	___stack_chk_guard@GOTPCREL(%rip), %rdi
	movq	(%rdi), %rdi
	movq	-8(%rbp), %rdx
	cmpq	%rdx, %rdi
	movl	%eax, -124(%rbp)        ## 4-byte Spill
	jne	LBB0_2
## %bb.1:
	xorl	%eax, %eax
	addq	$128, %rsp
	popq	%rbp
	retq
LBB0_2:
	callq	___stack_chk_fail
	ud2
	.cfi_endproc
                                        ## -- End function
	.section	__TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
	.asciz	"Hi what's your first name? \n"

L_.str.1:                               ## @.str.1
	.asciz	"%s"

L_.str.2:                               ## @.str.2
	.asciz	"%s, what's your weight in pounds \n"

L_.str.3:                               ## @.str.3
	.asciz	"%f"

L_.str.4:                               ## @.str.4
	.asciz	"well %s your volumn is %2.2f cubic feet \n"

L_.str.5:                               ## @.str.5
	.asciz	"also your first name has %d letters"

L_.str.6:                               ## @.str.6
	.asciz	"and we have %d bytes to store it \n"


.subsections_via_symbols

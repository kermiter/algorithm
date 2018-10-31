	.section	__TEXT,__text,regular,pure_instructions
	.macosx_version_min 10, 13
	.globl	_main                   ## -- Begin function main
	.p2align	4, 0x90
_main:                                  ## @main
Lfunc_begin0:
	.cfi_startproc
	.cfi_personality 155, ___gxx_personality_v0
	.cfi_lsda 16, Lexception0
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$592, %rsp              ## imm = 0x250
	leaq	-384(%rbp), %rax
	leaq	-368(%rbp), %rcx
	leaq	-464(%rbp), %rdx
	leaq	l_.ref.tmp(%rip), %rsi
	movl	$0, -436(%rbp)
	movb	l__ZZ4mainE1s(%rip), %dil
	movb	%dil, -440(%rbp)
	movq	%rsi, -480(%rbp)
	movq	$4, -472(%rbp)
	movq	-480(%rbp), %rsi
	movq	-472(%rbp), %r8
	movq	%rsi, -424(%rbp)
	movq	%r8, -416(%rbp)
	movq	%rdx, -432(%rbp)
	movq	-432(%rbp), %rdx
	movq	-424(%rbp), %rsi
	movq	-416(%rbp), %r8
	movq	%rsi, -384(%rbp)
	movq	%r8, -376(%rbp)
	movq	%rdx, -392(%rbp)
	movq	-392(%rbp), %rdx
	movq	%rdx, %rsi
	movq	%rsi, -360(%rbp)
	movq	-360(%rbp), %rsi
	movq	%rsi, %r8
	movq	%r8, -352(%rbp)
	movq	$0, (%rsi)
	movq	$0, 8(%rsi)
	addq	$16, %rsi
	movq	$0, -368(%rbp)
	movq	%rsi, -336(%rbp)
	movq	%rcx, -344(%rbp)
	movq	-336(%rbp), %rcx
	movq	-344(%rbp), %rsi
	movq	%rcx, -320(%rbp)
	movq	%rsi, -328(%rbp)
	movq	-320(%rbp), %rcx
	movq	%rcx, %rsi
	movq	-328(%rbp), %r8
	movq	%r8, -312(%rbp)
	movq	-312(%rbp), %r8
	movq	%rsi, -280(%rbp)
	movq	%r8, -288(%rbp)
	movq	-280(%rbp), %rsi
	movq	-288(%rbp), %r8
	movq	%r8, -272(%rbp)
	movq	$0, (%rsi)
	movq	%rcx, -304(%rbp)
	movq	-304(%rbp), %rcx
	movq	%rcx, -296(%rbp)
	movq	%rax, -264(%rbp)
	movq	-264(%rbp), %rax
	cmpq	$0, 8(%rax)
	movq	%rdx, -544(%rbp)        ## 8-byte Spill
	jbe	LBB0_5
## %bb.1:
	leaq	-384(%rbp), %rax
	movq	%rax, -256(%rbp)
	movq	-256(%rbp), %rax
	movq	8(%rax), %rsi
Ltmp0:
	movq	-544(%rbp), %rdi        ## 8-byte Reload
	callq	__ZNSt3__16vectorIiNS_9allocatorIiEEE8allocateEm
Ltmp1:
	jmp	LBB0_2
LBB0_2:
	leaq	-384(%rbp), %rax
	movq	%rax, -232(%rbp)
	movq	-232(%rbp), %rcx
	movq	(%rcx), %rsi
	movq	%rax, -240(%rbp)
	movq	-240(%rbp), %rcx
	movq	(%rcx), %rdx
	movq	8(%rcx), %rcx
	leaq	(%rdx,%rcx,4), %rdx
	movq	%rax, -248(%rbp)
	movq	-248(%rbp), %rax
	movq	8(%rax), %rcx
Ltmp2:
	movq	-544(%rbp), %rdi        ## 8-byte Reload
	callq	__ZNSt3__16vectorIiNS_9allocatorIiEEE18__construct_at_endIPKiEENS_9enable_ifIXsr21__is_forward_iteratorIT_EE5valueEvE4typeES8_S8_m
Ltmp3:
	jmp	LBB0_3
LBB0_3:
	jmp	LBB0_5
LBB0_4:
Ltmp4:
	movl	%edx, %ecx
	movq	%rax, -400(%rbp)
	movl	%ecx, -404(%rbp)
	movq	-544(%rbp), %rax        ## 8-byte Reload
	movq	%rax, %rdi
	callq	__ZNSt3__113__vector_baseIiNS_9allocatorIiEEED2Ev
	movq	-400(%rbp), %rax
	movq	%rax, -552(%rbp)        ## 8-byte Spill
	jmp	LBB0_20
LBB0_5:
	leaq	-176(%rbp), %rax
	leaq	-160(%rbp), %rcx
	leaq	-504(%rbp), %rdx
	leaq	l_.ref.tmp.1(%rip), %rsi
	movq	%rsi, -520(%rbp)
	movq	$4, -512(%rbp)
	movq	-520(%rbp), %rsi
	movq	-512(%rbp), %rdi
	movq	%rsi, -216(%rbp)
	movq	%rdi, -208(%rbp)
	movq	%rdx, -224(%rbp)
	movq	-224(%rbp), %rdx
	movq	-216(%rbp), %rsi
	movq	-208(%rbp), %rdi
	movq	%rsi, -176(%rbp)
	movq	%rdi, -168(%rbp)
	movq	%rdx, -184(%rbp)
	movq	-184(%rbp), %rdx
	movq	%rdx, %rsi
	movq	%rsi, -152(%rbp)
	movq	-152(%rbp), %rsi
	movq	%rsi, %rdi
	movq	%rdi, -144(%rbp)
	movq	$0, (%rsi)
	movq	$0, 8(%rsi)
	addq	$16, %rsi
	movq	$0, -160(%rbp)
	movq	%rsi, -128(%rbp)
	movq	%rcx, -136(%rbp)
	movq	-128(%rbp), %rcx
	movq	-136(%rbp), %rsi
	movq	%rcx, -112(%rbp)
	movq	%rsi, -120(%rbp)
	movq	-112(%rbp), %rcx
	movq	%rcx, %rsi
	movq	-120(%rbp), %rdi
	movq	%rdi, -104(%rbp)
	movq	-104(%rbp), %rdi
	movq	%rsi, -72(%rbp)
	movq	%rdi, -80(%rbp)
	movq	-72(%rbp), %rsi
	movq	-80(%rbp), %rdi
	movq	%rdi, -64(%rbp)
	movq	$0, (%rsi)
	movq	%rcx, -96(%rbp)
	movq	-96(%rbp), %rcx
	movq	%rcx, -88(%rbp)
	movq	%rax, -56(%rbp)
	movq	-56(%rbp), %rax
	cmpq	$0, 8(%rax)
	movq	%rdx, -560(%rbp)        ## 8-byte Spill
	jbe	LBB0_10
## %bb.6:
	leaq	-176(%rbp), %rax
	movq	%rax, -48(%rbp)
	movq	-48(%rbp), %rax
	movq	8(%rax), %rsi
Ltmp5:
	movq	-560(%rbp), %rdi        ## 8-byte Reload
	callq	__ZNSt3__16vectorIiNS_9allocatorIiEEE8allocateEm
Ltmp6:
	jmp	LBB0_7
LBB0_7:
	leaq	-176(%rbp), %rax
	movq	%rax, -24(%rbp)
	movq	-24(%rbp), %rcx
	movq	(%rcx), %rsi
	movq	%rax, -32(%rbp)
	movq	-32(%rbp), %rcx
	movq	(%rcx), %rdx
	movq	8(%rcx), %rcx
	leaq	(%rdx,%rcx,4), %rdx
	movq	%rax, -40(%rbp)
	movq	-40(%rbp), %rax
	movq	8(%rax), %rcx
Ltmp7:
	movq	-560(%rbp), %rdi        ## 8-byte Reload
	callq	__ZNSt3__16vectorIiNS_9allocatorIiEEE18__construct_at_endIPKiEENS_9enable_ifIXsr21__is_forward_iteratorIT_EE5valueEvE4typeES8_S8_m
Ltmp8:
	jmp	LBB0_8
LBB0_8:
	jmp	LBB0_10
LBB0_9:
Ltmp9:
	movl	%edx, %ecx
	movq	%rax, -192(%rbp)
	movl	%ecx, -196(%rbp)
	movq	-560(%rbp), %rdi        ## 8-byte Reload
	callq	__ZNSt3__113__vector_baseIiNS_9allocatorIiEEED2Ev
	movq	-192(%rbp), %rax
	movl	-196(%rbp), %ecx
	movq	%rax, -568(%rbp)        ## 8-byte Spill
	movl	%ecx, -572(%rbp)        ## 4-byte Spill
	jmp	LBB0_16
LBB0_10:
	jmp	LBB0_11
LBB0_11:
Ltmp10:
	leaq	-440(%rbp), %rdi
	leaq	-504(%rbp), %rsi
	callq	__ZN8Solution14find132patternERNSt3__16vectorIiNS0_9allocatorIiEEEE
Ltmp11:
	movb	%al, -573(%rbp)         ## 1-byte Spill
	jmp	LBB0_12
LBB0_12:
Ltmp12:
	movb	-573(%rbp), %al         ## 1-byte Reload
	andb	$1, %al
	movzbl	%al, %esi
	movq	__ZNSt3__14coutE@GOTPCREL(%rip), %rdi
	callq	__ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEb
Ltmp13:
	movq	%rax, -584(%rbp)        ## 8-byte Spill
	jmp	LBB0_13
LBB0_13:
	movq	-584(%rbp), %rax        ## 8-byte Reload
	movq	%rax, -8(%rbp)
	leaq	__ZNSt3__14endlIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_(%rip), %rcx
	movq	%rcx, -16(%rbp)
	movq	-8(%rbp), %rdi
	movq	-16(%rbp), %rcx
Ltmp14:
	callq	*%rcx
Ltmp15:
	movq	%rax, -592(%rbp)        ## 8-byte Spill
	jmp	LBB0_14
LBB0_14:
	jmp	LBB0_15
LBB0_15:
	leaq	-504(%rbp), %rdi
	movl	$0, -436(%rbp)
	callq	__ZNSt3__16vectorIiNS_9allocatorIiEEED1Ev
	leaq	-464(%rbp), %rdi
	callq	__ZNSt3__16vectorIiNS_9allocatorIiEEED1Ev
	movl	-436(%rbp), %eax
	addq	$592, %rsp              ## imm = 0x250
	popq	%rbp
	retq
LBB0_16:
	movq	-568(%rbp), %rax        ## 8-byte Reload
	movq	%rax, -528(%rbp)
	movl	-572(%rbp), %ecx        ## 4-byte Reload
	movl	%ecx, -532(%rbp)
	jmp	LBB0_18
LBB0_17:
Ltmp16:
	leaq	-504(%rbp), %rdi
	movl	%edx, %ecx
	movq	%rax, -528(%rbp)
	movl	%ecx, -532(%rbp)
	callq	__ZNSt3__16vectorIiNS_9allocatorIiEEED1Ev
LBB0_18:
	leaq	-464(%rbp), %rdi
	callq	__ZNSt3__16vectorIiNS_9allocatorIiEEED1Ev
## %bb.19:
	movq	-528(%rbp), %rax
	movq	%rax, -552(%rbp)        ## 8-byte Spill
LBB0_20:
	movq	-552(%rbp), %rax        ## 8-byte Reload
	movq	%rax, %rdi
	callq	__Unwind_Resume
	ud2
Lfunc_end0:
	.cfi_endproc
	.section	__TEXT,__gcc_except_tab
	.p2align	2
GCC_except_table0:
Lexception0:
	.byte	255                     ## @LPStart Encoding = omit
	.byte	155                     ## @TType Encoding = indirect pcrel sdata4
	.asciz	"\266\200\200"          ## @TType base offset
	.byte	3                       ## Call site Encoding = udata4
	.byte	52                      ## Call site table length
Lset0 = Ltmp0-Lfunc_begin0              ## >> Call Site 1 <<
	.long	Lset0
Lset1 = Ltmp3-Ltmp0                     ##   Call between Ltmp0 and Ltmp3
	.long	Lset1
Lset2 = Ltmp4-Lfunc_begin0              ##     jumps to Ltmp4
	.long	Lset2
	.byte	0                       ##   On action: cleanup
Lset3 = Ltmp5-Lfunc_begin0              ## >> Call Site 2 <<
	.long	Lset3
Lset4 = Ltmp8-Ltmp5                     ##   Call between Ltmp5 and Ltmp8
	.long	Lset4
Lset5 = Ltmp9-Lfunc_begin0              ##     jumps to Ltmp9
	.long	Lset5
	.byte	0                       ##   On action: cleanup
Lset6 = Ltmp10-Lfunc_begin0             ## >> Call Site 3 <<
	.long	Lset6
Lset7 = Ltmp15-Ltmp10                   ##   Call between Ltmp10 and Ltmp15
	.long	Lset7
Lset8 = Ltmp16-Lfunc_begin0             ##     jumps to Ltmp16
	.long	Lset8
	.byte	0                       ##   On action: cleanup
Lset9 = Ltmp15-Lfunc_begin0             ## >> Call Site 4 <<
	.long	Lset9
Lset10 = Lfunc_end0-Ltmp15              ##   Call between Ltmp15 and Lfunc_end0
	.long	Lset10
	.long	0                       ##     has no landing pad
	.byte	0                       ##   On action: cleanup
	.p2align	2
                                        ## -- End function
	.section	__TEXT,__text,regular,pure_instructions
	.globl	__ZN8Solution14find132patternERNSt3__16vectorIiNS0_9allocatorIiEEEE ## -- Begin function _ZN8Solution14find132patternERNSt3__16vectorIiNS0_9allocatorIiEEEE
	.weak_definition	__ZN8Solution14find132patternERNSt3__16vectorIiNS0_9allocatorIiEEEE
	.p2align	4, 0x90
__ZN8Solution14find132patternERNSt3__16vectorIiNS0_9allocatorIiEEEE: ## @_ZN8Solution14find132patternERNSt3__16vectorIiNS0_9allocatorIiEEEE
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$72, %rsp
	movq	%rdi, -168(%rbp)
	movq	%rsi, -176(%rbp)
	movl	$2147483647, -180(%rbp) ## imm = 0x7FFFFFFF
	movl	$0, -184(%rbp)
LBB1_1:                                 ## =>This Loop Header: Depth=1
                                        ##     Child Loop BB1_6 Depth 2
	movslq	-184(%rbp), %rax
	movq	-176(%rbp), %rcx
	movq	%rcx, -152(%rbp)
	movq	-152(%rbp), %rcx
	movq	8(%rcx), %rdx
	movq	(%rcx), %rcx
	subq	%rcx, %rdx
	sarq	$2, %rdx
	cmpq	%rdx, %rax
	jae	LBB1_14
## %bb.2:                               ##   in Loop: Header=BB1_1 Depth=1
	leaq	-48(%rbp), %rax
	leaq	-180(%rbp), %rcx
	movq	-176(%rbp), %rdx
	movslq	-184(%rbp), %rsi
	movq	%rdx, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rdx
	movq	(%rdx), %rdx
	movq	-16(%rbp), %rsi
	shlq	$2, %rsi
	addq	%rsi, %rdx
	movq	%rcx, -72(%rbp)
	movq	%rdx, -80(%rbp)
	movq	-72(%rbp), %rcx
	movq	-80(%rbp), %rdx
	movq	%rcx, -56(%rbp)
	movq	%rdx, -64(%rbp)
	movq	-64(%rbp), %rcx
	movq	-56(%rbp), %rdx
	movq	%rax, -24(%rbp)
	movq	%rcx, -32(%rbp)
	movq	%rdx, -40(%rbp)
	movq	-32(%rbp), %rax
	movl	(%rax), %edi
	movq	-40(%rbp), %rax
	cmpl	(%rax), %edi
	jge	LBB1_4
## %bb.3:                               ##   in Loop: Header=BB1_1 Depth=1
	movq	-64(%rbp), %rax
	movq	%rax, -200(%rbp)        ## 8-byte Spill
	jmp	LBB1_5
LBB1_4:                                 ##   in Loop: Header=BB1_1 Depth=1
	movq	-56(%rbp), %rax
	movq	%rax, -200(%rbp)        ## 8-byte Spill
LBB1_5:                                 ##   in Loop: Header=BB1_1 Depth=1
	movq	-200(%rbp), %rax        ## 8-byte Reload
	movl	(%rax), %ecx
	movl	%ecx, -180(%rbp)
	movl	-184(%rbp), %ecx
	addl	$1, %ecx
	movl	%ecx, -188(%rbp)
LBB1_6:                                 ##   Parent Loop BB1_1 Depth=1
                                        ## =>  This Inner Loop Header: Depth=2
	movslq	-188(%rbp), %rax
	movq	-176(%rbp), %rcx
	movq	%rcx, -96(%rbp)
	movq	-96(%rbp), %rcx
	movq	8(%rcx), %rdx
	movq	(%rcx), %rcx
	subq	%rcx, %rdx
	sarq	$2, %rdx
	cmpq	%rdx, %rax
	jae	LBB1_12
## %bb.7:                               ##   in Loop: Header=BB1_6 Depth=2
	movq	-176(%rbp), %rax
	movslq	-188(%rbp), %rcx
	movq	%rax, -104(%rbp)
	movq	%rcx, -112(%rbp)
	movq	-104(%rbp), %rax
	movq	(%rax), %rax
	movq	-112(%rbp), %rcx
	movl	(%rax,%rcx,4), %edx
	movq	-176(%rbp), %rax
	movslq	-184(%rbp), %rcx
	movq	%rax, -120(%rbp)
	movq	%rcx, -128(%rbp)
	movq	-120(%rbp), %rax
	movq	(%rax), %rax
	movq	-128(%rbp), %rcx
	cmpl	(%rax,%rcx,4), %edx
	jge	LBB1_10
## %bb.8:                               ##   in Loop: Header=BB1_6 Depth=2
	movl	-180(%rbp), %eax
	movq	-176(%rbp), %rcx
	movslq	-184(%rbp), %rdx
	movq	%rcx, -136(%rbp)
	movq	%rdx, -144(%rbp)
	movq	-136(%rbp), %rcx
	movq	(%rcx), %rcx
	movq	-144(%rbp), %rdx
	cmpl	(%rcx,%rdx,4), %eax
	jge	LBB1_10
## %bb.9:
	movb	$1, -153(%rbp)
	jmp	LBB1_15
LBB1_10:                                ##   in Loop: Header=BB1_6 Depth=2
	jmp	LBB1_11
LBB1_11:                                ##   in Loop: Header=BB1_6 Depth=2
	movl	-188(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -188(%rbp)
	jmp	LBB1_6
LBB1_12:                                ##   in Loop: Header=BB1_1 Depth=1
	jmp	LBB1_13
LBB1_13:                                ##   in Loop: Header=BB1_1 Depth=1
	movl	-184(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -184(%rbp)
	jmp	LBB1_1
LBB1_14:
	movb	$0, -153(%rbp)
LBB1_15:
	movb	-153(%rbp), %al
	andb	$1, %al
	movzbl	%al, %eax
	addq	$72, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.private_extern	__ZNSt3__14endlIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_ ## -- Begin function _ZNSt3__14endlIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_
	.globl	__ZNSt3__14endlIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_
	.weak_definition	__ZNSt3__14endlIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_
	.p2align	4, 0x90
__ZNSt3__14endlIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_: ## @_ZNSt3__14endlIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_
Lfunc_begin1:
	.cfi_startproc
	.cfi_personality 155, ___gxx_personality_v0
	.cfi_lsda 16, Lexception1
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$144, %rsp
	movq	%rdi, -72(%rbp)
	movq	-72(%rbp), %rdi
	movq	(%rdi), %rax
	movq	-24(%rax), %rax
	movq	%rdi, %rcx
	addq	%rax, %rcx
	movq	%rcx, -32(%rbp)
	movb	$10, -33(%rbp)
	movq	-32(%rbp), %rsi
	leaq	-48(%rbp), %rax
	movq	%rdi, -80(%rbp)         ## 8-byte Spill
	movq	%rax, %rdi
	movq	%rax, -88(%rbp)         ## 8-byte Spill
	callq	__ZNKSt3__18ios_base6getlocEv
	movq	-88(%rbp), %rax         ## 8-byte Reload
	movq	%rax, -24(%rbp)
	movq	-24(%rbp), %rdi
Ltmp17:
	movq	__ZNSt3__15ctypeIcE2idE@GOTPCREL(%rip), %rsi
	callq	__ZNKSt3__16locale9use_facetERNS0_2idE
Ltmp18:
	movq	%rax, -96(%rbp)         ## 8-byte Spill
	jmp	LBB2_1
LBB2_1:
	movb	-33(%rbp), %al
	movq	-96(%rbp), %rcx         ## 8-byte Reload
	movq	%rcx, -8(%rbp)
	movb	%al, -9(%rbp)
	movq	-8(%rbp), %rdx
	movq	(%rdx), %rsi
	movq	56(%rsi), %rsi
	movsbl	-9(%rbp), %edi
Ltmp19:
	movl	%edi, -100(%rbp)        ## 4-byte Spill
	movq	%rdx, %rdi
	movl	-100(%rbp), %r8d        ## 4-byte Reload
	movq	%rsi, -112(%rbp)        ## 8-byte Spill
	movl	%r8d, %esi
	movq	-112(%rbp), %rdx        ## 8-byte Reload
	callq	*%rdx
Ltmp20:
	movb	%al, -113(%rbp)         ## 1-byte Spill
	jmp	LBB2_3
LBB2_2:
Ltmp21:
	movl	%edx, %ecx
	movq	%rax, -56(%rbp)
	movl	%ecx, -60(%rbp)
	leaq	-48(%rbp), %rdi
	callq	__ZNSt3__16localeD1Ev
	movq	-56(%rbp), %rdi
	callq	__Unwind_Resume
	ud2
LBB2_3:
	leaq	-48(%rbp), %rdi
	callq	__ZNSt3__16localeD1Ev
	movq	-80(%rbp), %rdi         ## 8-byte Reload
	movb	-113(%rbp), %al         ## 1-byte Reload
	movsbl	%al, %esi
	callq	__ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE3putEc
	movq	-72(%rbp), %rdi
	movq	%rax, -128(%rbp)        ## 8-byte Spill
	callq	__ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5flushEv
	movq	-72(%rbp), %rdi
	movq	%rax, -136(%rbp)        ## 8-byte Spill
	movq	%rdi, %rax
	addq	$144, %rsp
	popq	%rbp
	retq
Lfunc_end1:
	.cfi_endproc
	.section	__TEXT,__gcc_except_tab
	.p2align	2
GCC_except_table2:
Lexception1:
	.byte	255                     ## @LPStart Encoding = omit
	.byte	155                     ## @TType Encoding = indirect pcrel sdata4
	.byte	41                      ## @TType base offset
	.byte	3                       ## Call site Encoding = udata4
	.byte	39                      ## Call site table length
Lset11 = Lfunc_begin1-Lfunc_begin1      ## >> Call Site 1 <<
	.long	Lset11
Lset12 = Ltmp17-Lfunc_begin1            ##   Call between Lfunc_begin1 and Ltmp17
	.long	Lset12
	.long	0                       ##     has no landing pad
	.byte	0                       ##   On action: cleanup
Lset13 = Ltmp17-Lfunc_begin1            ## >> Call Site 2 <<
	.long	Lset13
Lset14 = Ltmp20-Ltmp17                  ##   Call between Ltmp17 and Ltmp20
	.long	Lset14
Lset15 = Ltmp21-Lfunc_begin1            ##     jumps to Ltmp21
	.long	Lset15
	.byte	0                       ##   On action: cleanup
Lset16 = Ltmp20-Lfunc_begin1            ## >> Call Site 3 <<
	.long	Lset16
Lset17 = Lfunc_end1-Ltmp20              ##   Call between Ltmp20 and Lfunc_end1
	.long	Lset17
	.long	0                       ##     has no landing pad
	.byte	0                       ##   On action: cleanup
	.p2align	2
                                        ## -- End function
	.section	__TEXT,__text,regular,pure_instructions
	.globl	__ZNSt3__16vectorIiNS_9allocatorIiEEED1Ev ## -- Begin function _ZNSt3__16vectorIiNS_9allocatorIiEEED1Ev
	.weak_def_can_be_hidden	__ZNSt3__16vectorIiNS_9allocatorIiEEED1Ev
	.p2align	4, 0x90
__ZNSt3__16vectorIiNS_9allocatorIiEEED1Ev: ## @_ZNSt3__16vectorIiNS_9allocatorIiEEED1Ev
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	__ZNSt3__16vectorIiNS_9allocatorIiEEED2Ev
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.globl	__ZNSt3__16vectorIiNS_9allocatorIiEEED2Ev ## -- Begin function _ZNSt3__16vectorIiNS_9allocatorIiEEED2Ev
	.weak_def_can_be_hidden	__ZNSt3__16vectorIiNS_9allocatorIiEEED2Ev
	.p2align	4, 0x90
__ZNSt3__16vectorIiNS_9allocatorIiEEED2Ev: ## @_ZNSt3__16vectorIiNS_9allocatorIiEEED2Ev
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	__ZNSt3__113__vector_baseIiNS_9allocatorIiEEED2Ev
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.globl	__ZNSt3__113__vector_baseIiNS_9allocatorIiEEED2Ev ## -- Begin function _ZNSt3__113__vector_baseIiNS_9allocatorIiEEED2Ev
	.weak_def_can_be_hidden	__ZNSt3__113__vector_baseIiNS_9allocatorIiEEED2Ev
	.p2align	4, 0x90
__ZNSt3__113__vector_baseIiNS_9allocatorIiEEED2Ev: ## @_ZNSt3__113__vector_baseIiNS_9allocatorIiEEED2Ev
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$272, %rsp              ## imm = 0x110
	movq	%rdi, -256(%rbp)
	movq	-256(%rbp), %rdi
	cmpq	$0, (%rdi)
	movq	%rdi, -264(%rbp)        ## 8-byte Spill
	je	LBB5_5
## %bb.1:
	movq	-264(%rbp), %rax        ## 8-byte Reload
	movq	%rax, -248(%rbp)
	movq	-248(%rbp), %rcx
	movq	(%rcx), %rdx
	movq	%rcx, -224(%rbp)
	movq	%rdx, -232(%rbp)
	movq	-224(%rbp), %rcx
	movq	8(%rcx), %rdx
	movq	%rdx, -240(%rbp)
	movq	%rcx, -272(%rbp)        ## 8-byte Spill
LBB5_2:                                 ## =>This Inner Loop Header: Depth=1
	movq	-232(%rbp), %rax
	cmpq	-240(%rbp), %rax
	je	LBB5_4
## %bb.3:                               ##   in Loop: Header=BB5_2 Depth=1
	movq	-272(%rbp), %rax        ## 8-byte Reload
	movq	%rax, -216(%rbp)
	movq	-216(%rbp), %rcx
	addq	$16, %rcx
	movq	%rcx, -208(%rbp)
	movq	-208(%rbp), %rcx
	movq	%rcx, -200(%rbp)
	movq	-200(%rbp), %rcx
	movq	-240(%rbp), %rdx
	addq	$-4, %rdx
	movq	%rdx, -240(%rbp)
	movq	%rdx, -192(%rbp)
	movq	-192(%rbp), %rdx
	movq	%rcx, -160(%rbp)
	movq	%rdx, -168(%rbp)
	movq	-160(%rbp), %rcx
	movq	-168(%rbp), %rdx
	movq	%rcx, -144(%rbp)
	movq	%rdx, -152(%rbp)
	movq	-144(%rbp), %rcx
	movq	-152(%rbp), %rdx
	movq	%rcx, -120(%rbp)
	movq	%rdx, -128(%rbp)
	jmp	LBB5_2
LBB5_4:
	movq	-232(%rbp), %rax
	movq	-272(%rbp), %rcx        ## 8-byte Reload
	movq	%rax, 8(%rcx)
	movq	-264(%rbp), %rax        ## 8-byte Reload
	movq	%rax, -56(%rbp)
	movq	-56(%rbp), %rdx
	addq	$16, %rdx
	movq	%rdx, -48(%rbp)
	movq	-48(%rbp), %rdx
	movq	%rdx, -40(%rbp)
	movq	-40(%rbp), %rdx
	movq	(%rax), %rsi
	movq	%rax, -32(%rbp)
	movq	-32(%rbp), %rdi
	movq	%rdi, -24(%rbp)
	movq	-24(%rbp), %r8
	addq	$16, %r8
	movq	%r8, -16(%rbp)
	movq	-16(%rbp), %r8
	movq	%r8, -8(%rbp)
	movq	-8(%rbp), %r8
	movq	(%r8), %r8
	movq	(%rdi), %rdi
	subq	%rdi, %r8
	sarq	$2, %r8
	movq	%rdx, -96(%rbp)
	movq	%rsi, -104(%rbp)
	movq	%r8, -112(%rbp)
	movq	-96(%rbp), %rdx
	movq	-104(%rbp), %rsi
	movq	-112(%rbp), %rdi
	movq	%rdx, -72(%rbp)
	movq	%rsi, -80(%rbp)
	movq	%rdi, -88(%rbp)
	movq	-80(%rbp), %rdx
	movq	%rdx, -64(%rbp)
	movq	-64(%rbp), %rdi
	callq	__ZdlPv
LBB5_5:
	addq	$272, %rsp              ## imm = 0x110
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.private_extern	___clang_call_terminate ## -- Begin function __clang_call_terminate
	.globl	___clang_call_terminate
	.weak_definition	___clang_call_terminate
	.p2align	4, 0x90
___clang_call_terminate:                ## @__clang_call_terminate
## %bb.0:
	pushq	%rax
	callq	___cxa_begin_catch
	movq	%rax, (%rsp)            ## 8-byte Spill
	callq	__ZSt9terminatev
                                        ## -- End function
	.globl	__ZNSt3__16vectorIiNS_9allocatorIiEEE8allocateEm ## -- Begin function _ZNSt3__16vectorIiNS_9allocatorIiEEE8allocateEm
	.weak_definition	__ZNSt3__16vectorIiNS_9allocatorIiEEE8allocateEm
	.p2align	4, 0x90
__ZNSt3__16vectorIiNS_9allocatorIiEEE8allocateEm: ## @_ZNSt3__16vectorIiNS_9allocatorIiEEE8allocateEm
Lfunc_begin2:
	.cfi_startproc
	.cfi_personality 155, ___gxx_personality_v0
	.cfi_lsda 16, Lexception2
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$416, %rsp              ## imm = 0x1A0
	movq	%rdi, -368(%rbp)
	movq	%rsi, -376(%rbp)
	movq	-368(%rbp), %rsi
	movq	-376(%rbp), %rdi
	movq	%rdi, -384(%rbp)        ## 8-byte Spill
	movq	%rsi, %rdi
	movq	%rsi, -392(%rbp)        ## 8-byte Spill
	callq	__ZNKSt3__16vectorIiNS_9allocatorIiEEE8max_sizeEv
	movq	-384(%rbp), %rsi        ## 8-byte Reload
	cmpq	%rax, %rsi
	jbe	LBB7_2
## %bb.1:
	movq	-392(%rbp), %rdi        ## 8-byte Reload
	callq	__ZNKSt3__120__vector_base_commonILb1EE20__throw_length_errorEv
LBB7_2:
	movabsq	$4611686018427387903, %rax ## imm = 0x3FFFFFFFFFFFFFFF
	movq	-392(%rbp), %rcx        ## 8-byte Reload
	movq	%rcx, -360(%rbp)
	movq	-360(%rbp), %rcx
	addq	$16, %rcx
	movq	%rcx, -352(%rbp)
	movq	-352(%rbp), %rcx
	movq	%rcx, -344(%rbp)
	movq	-344(%rbp), %rcx
	movq	-376(%rbp), %rdx
	movq	%rcx, -104(%rbp)
	movq	%rdx, -112(%rbp)
	movq	-104(%rbp), %rcx
	movq	-112(%rbp), %rdx
	movq	%rcx, -80(%rbp)
	movq	%rdx, -88(%rbp)
	movq	$0, -96(%rbp)
	movq	-80(%rbp), %rcx
	movq	-88(%rbp), %rdx
	movq	%rcx, -72(%rbp)
	cmpq	%rax, %rdx
	jbe	LBB7_6
## %bb.3:
	leaq	L_.str(%rip), %rax
	movq	%rax, -40(%rbp)
	movl	$16, %ecx
	movl	%ecx, %edi
	callq	___cxa_allocate_exception
	movq	%rax, %rdi
	movq	-40(%rbp), %rdx
	movq	%rax, -24(%rbp)
	movq	%rdx, -32(%rbp)
	movq	-24(%rbp), %rax
	movq	-32(%rbp), %rdx
	movq	%rax, -8(%rbp)
	movq	%rdx, -16(%rbp)
	movq	-8(%rbp), %rax
	movq	-16(%rbp), %rsi
Ltmp22:
	movq	%rdi, -400(%rbp)        ## 8-byte Spill
	movq	%rax, %rdi
	movq	%rax, -408(%rbp)        ## 8-byte Spill
	callq	__ZNSt11logic_errorC2EPKc
Ltmp23:
	jmp	LBB7_4
LBB7_4:
	movq	__ZTVSt12length_error@GOTPCREL(%rip), %rax
	addq	$16, %rax
	movq	-408(%rbp), %rcx        ## 8-byte Reload
	movq	%rax, (%rcx)
	movq	__ZTISt12length_error@GOTPCREL(%rip), %rsi
	movq	__ZNSt12length_errorD1Ev@GOTPCREL(%rip), %rdx
	movq	-400(%rbp), %rdi        ## 8-byte Reload
	callq	___cxa_throw
LBB7_5:
Ltmp24:
	movl	%edx, %ecx
	movq	%rax, -48(%rbp)
	movl	%ecx, -52(%rbp)
	movq	-400(%rbp), %rdi        ## 8-byte Reload
	callq	___cxa_free_exception
	movq	-48(%rbp), %rdi
	callq	__Unwind_Resume
	ud2
LBB7_6:
	movq	-88(%rbp), %rax
	shlq	$2, %rax
	movq	%rax, -64(%rbp)
	movq	-64(%rbp), %rdi
	callq	__Znwm
	movq	-392(%rbp), %rdi        ## 8-byte Reload
	movq	%rax, 8(%rdi)
	movq	%rax, (%rdi)
	movq	(%rdi), %rax
	movq	-376(%rbp), %rcx
	shlq	$2, %rcx
	addq	%rcx, %rax
	movq	%rdi, -136(%rbp)
	movq	-136(%rbp), %rcx
	addq	$16, %rcx
	movq	%rcx, -128(%rbp)
	movq	-128(%rbp), %rcx
	movq	%rcx, -120(%rbp)
	movq	-120(%rbp), %rcx
	movq	%rax, (%rcx)
	movq	-392(%rbp), %rax        ## 8-byte Reload
	movq	%rax, -328(%rbp)
	movq	$0, -336(%rbp)
	movq	-328(%rbp), %rcx
	movq	%rcx, -320(%rbp)
	movq	-320(%rbp), %rdi
	movq	(%rdi), %rdi
	movq	%rdi, -312(%rbp)
	movq	-312(%rbp), %rdi
	movq	%rcx, -152(%rbp)
	movq	-152(%rbp), %rdx
	movq	(%rdx), %rdx
	movq	%rdx, -144(%rbp)
	movq	-144(%rbp), %rdx
	movq	%rcx, -192(%rbp)
	movq	-192(%rbp), %rsi
	movq	%rsi, -184(%rbp)
	movq	-184(%rbp), %rsi
	movq	%rsi, -176(%rbp)
	movq	-176(%rbp), %r8
	addq	$16, %r8
	movq	%r8, -168(%rbp)
	movq	-168(%rbp), %r8
	movq	%r8, -160(%rbp)
	movq	-160(%rbp), %r8
	movq	(%r8), %r8
	movq	(%rsi), %rsi
	subq	%rsi, %r8
	sarq	$2, %r8
	shlq	$2, %r8
	addq	%r8, %rdx
	movq	%rcx, -208(%rbp)
	movq	-208(%rbp), %rsi
	movq	(%rsi), %rsi
	movq	%rsi, -200(%rbp)
	movq	-200(%rbp), %rsi
	movq	%rcx, -248(%rbp)
	movq	-248(%rbp), %r8
	movq	%r8, -240(%rbp)
	movq	-240(%rbp), %r8
	movq	%r8, -232(%rbp)
	movq	-232(%rbp), %r9
	addq	$16, %r9
	movq	%r9, -224(%rbp)
	movq	-224(%rbp), %r9
	movq	%r9, -216(%rbp)
	movq	-216(%rbp), %r9
	movq	(%r9), %r9
	movq	(%r8), %r8
	subq	%r8, %r9
	sarq	$2, %r9
	shlq	$2, %r9
	addq	%r9, %rsi
	movq	%rcx, -264(%rbp)
	movq	-264(%rbp), %r8
	movq	(%r8), %r8
	movq	%r8, -256(%rbp)
	movq	-256(%rbp), %r8
	movq	-336(%rbp), %r9
	shlq	$2, %r9
	addq	%r9, %r8
	movq	%rcx, -272(%rbp)
	movq	%rdi, -280(%rbp)
	movq	%rdx, -288(%rbp)
	movq	%rsi, -296(%rbp)
	movq	%r8, -304(%rbp)
	addq	$416, %rsp              ## imm = 0x1A0
	popq	%rbp
	retq
Lfunc_end2:
	.cfi_endproc
	.section	__TEXT,__gcc_except_tab
	.p2align	2
GCC_except_table7:
Lexception2:
	.byte	255                     ## @LPStart Encoding = omit
	.byte	155                     ## @TType Encoding = indirect pcrel sdata4
	.byte	41                      ## @TType base offset
	.byte	3                       ## Call site Encoding = udata4
	.byte	39                      ## Call site table length
Lset18 = Lfunc_begin2-Lfunc_begin2      ## >> Call Site 1 <<
	.long	Lset18
Lset19 = Ltmp22-Lfunc_begin2            ##   Call between Lfunc_begin2 and Ltmp22
	.long	Lset19
	.long	0                       ##     has no landing pad
	.byte	0                       ##   On action: cleanup
Lset20 = Ltmp22-Lfunc_begin2            ## >> Call Site 2 <<
	.long	Lset20
Lset21 = Ltmp23-Ltmp22                  ##   Call between Ltmp22 and Ltmp23
	.long	Lset21
Lset22 = Ltmp24-Lfunc_begin2            ##     jumps to Ltmp24
	.long	Lset22
	.byte	0                       ##   On action: cleanup
Lset23 = Ltmp23-Lfunc_begin2            ## >> Call Site 3 <<
	.long	Lset23
Lset24 = Lfunc_end2-Ltmp23              ##   Call between Ltmp23 and Lfunc_end2
	.long	Lset24
	.long	0                       ##     has no landing pad
	.byte	0                       ##   On action: cleanup
	.p2align	2
                                        ## -- End function
	.section	__TEXT,__text,regular,pure_instructions
	.globl	__ZNSt3__16vectorIiNS_9allocatorIiEEE18__construct_at_endIPKiEENS_9enable_ifIXsr21__is_forward_iteratorIT_EE5valueEvE4typeES8_S8_m ## -- Begin function _ZNSt3__16vectorIiNS_9allocatorIiEEE18__construct_at_endIPKiEENS_9enable_ifIXsr21__is_forward_iteratorIT_EE5valueEvE4typeES8_S8_m
	.weak_definition	__ZNSt3__16vectorIiNS_9allocatorIiEEE18__construct_at_endIPKiEENS_9enable_ifIXsr21__is_forward_iteratorIT_EE5valueEvE4typeES8_S8_m
	.p2align	4, 0x90
__ZNSt3__16vectorIiNS_9allocatorIiEEE18__construct_at_endIPKiEENS_9enable_ifIXsr21__is_forward_iteratorIT_EE5valueEvE4typeES8_S8_m: ## @_ZNSt3__16vectorIiNS_9allocatorIiEEE18__construct_at_endIPKiEENS_9enable_ifIXsr21__is_forward_iteratorIT_EE5valueEvE4typeES8_S8_m
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$160, %rsp
	leaq	-288(%rbp), %rax
	movq	%rdi, -248(%rbp)
	movq	%rsi, -256(%rbp)
	movq	%rdx, -264(%rbp)
	movq	%rcx, -272(%rbp)
	movq	-248(%rbp), %rcx
	movq	%rcx, %rdx
	movq	%rdx, -240(%rbp)
	movq	-240(%rbp), %rdx
	addq	$16, %rdx
	movq	%rdx, -232(%rbp)
	movq	-232(%rbp), %rdx
	movq	%rdx, -224(%rbp)
	movq	-224(%rbp), %rdx
	movq	%rdx, -280(%rbp)
	movq	-272(%rbp), %rdx
	movq	%rax, -32(%rbp)
	movq	%rcx, -40(%rbp)
	movq	%rdx, -48(%rbp)
	movq	-32(%rbp), %rax
	movq	-40(%rbp), %rdx
	movq	-48(%rbp), %rsi
	movq	%rax, -8(%rbp)
	movq	%rdx, -16(%rbp)
	movq	%rsi, -24(%rbp)
	movq	-280(%rbp), %rax
	movq	-256(%rbp), %rdx
	movq	-264(%rbp), %rsi
	addq	$8, %rcx
	movq	%rax, -184(%rbp)
	movq	%rdx, -192(%rbp)
	movq	%rsi, -200(%rbp)
	movq	%rcx, -208(%rbp)
LBB8_1:                                 ## =>This Inner Loop Header: Depth=1
	movq	-192(%rbp), %rax
	cmpq	-200(%rbp), %rax
	je	LBB8_3
## %bb.2:                               ##   in Loop: Header=BB8_1 Depth=1
	movq	-184(%rbp), %rax
	movq	-208(%rbp), %rcx
	movq	(%rcx), %rcx
	movq	%rcx, -176(%rbp)
	movq	-176(%rbp), %rcx
	movq	-192(%rbp), %rdx
	movq	%rax, -136(%rbp)
	movq	%rcx, -144(%rbp)
	movq	%rdx, -152(%rbp)
	movq	-136(%rbp), %rax
	movq	-144(%rbp), %rcx
	movq	-152(%rbp), %rdx
	movq	%rdx, -128(%rbp)
	movq	-128(%rbp), %rdx
	movq	%rax, -104(%rbp)
	movq	%rcx, -112(%rbp)
	movq	%rdx, -120(%rbp)
	movq	-104(%rbp), %rax
	movq	-112(%rbp), %rcx
	movq	-120(%rbp), %rdx
	movq	%rdx, -88(%rbp)
	movq	-88(%rbp), %rdx
	movq	%rax, -64(%rbp)
	movq	%rcx, -72(%rbp)
	movq	%rdx, -80(%rbp)
	movq	-72(%rbp), %rax
	movq	-80(%rbp), %rcx
	movq	%rcx, -56(%rbp)
	movq	-56(%rbp), %rcx
	movl	(%rcx), %esi
	movl	%esi, (%rax)
	movq	-192(%rbp), %rax
	addq	$4, %rax
	movq	%rax, -192(%rbp)
	movq	-208(%rbp), %rax
	movq	(%rax), %rcx
	addq	$4, %rcx
	movq	%rcx, (%rax)
	jmp	LBB8_1
LBB8_3:
	leaq	-288(%rbp), %rax
	movq	%rax, -216(%rbp)
	addq	$160, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.globl	__ZNKSt3__16vectorIiNS_9allocatorIiEEE8max_sizeEv ## -- Begin function _ZNKSt3__16vectorIiNS_9allocatorIiEEE8max_sizeEv
	.weak_definition	__ZNKSt3__16vectorIiNS_9allocatorIiEEE8max_sizeEv
	.p2align	4, 0x90
__ZNKSt3__16vectorIiNS_9allocatorIiEEE8max_sizeEv: ## @_ZNKSt3__16vectorIiNS_9allocatorIiEEE8max_sizeEv
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$56, %rsp
	leaq	-32(%rbp), %rax
	leaq	-168(%rbp), %rcx
	leaq	-160(%rbp), %rdx
	movabsq	$9223372036854775807, %rsi ## imm = 0x7FFFFFFFFFFFFFFF
	movabsq	$4611686018427387903, %r8 ## imm = 0x3FFFFFFFFFFFFFFF
	movq	%rdi, -152(%rbp)
	movq	-152(%rbp), %rdi
	movq	%rdi, -144(%rbp)
	movq	-144(%rbp), %rdi
	addq	$16, %rdi
	movq	%rdi, -136(%rbp)
	movq	-136(%rbp), %rdi
	movq	%rdi, -128(%rbp)
	movq	-128(%rbp), %rdi
	movq	%rdi, -104(%rbp)
	movq	-104(%rbp), %rdi
	movq	%rdi, -96(%rbp)
	movq	-96(%rbp), %rdi
	movq	%rdi, -80(%rbp)
	movq	%r8, -160(%rbp)
	movq	%rsi, -168(%rbp)
	movq	%rdx, -56(%rbp)
	movq	%rcx, -64(%rbp)
	movq	-56(%rbp), %rcx
	movq	-64(%rbp), %rdx
	movq	%rcx, -40(%rbp)
	movq	%rdx, -48(%rbp)
	movq	-48(%rbp), %rcx
	movq	-40(%rbp), %rdx
	movq	%rax, -8(%rbp)
	movq	%rcx, -16(%rbp)
	movq	%rdx, -24(%rbp)
	movq	-16(%rbp), %rax
	movq	(%rax), %rax
	movq	-24(%rbp), %rcx
	cmpq	(%rcx), %rax
	jae	LBB9_2
## %bb.1:
	movq	-48(%rbp), %rax
	movq	%rax, -176(%rbp)        ## 8-byte Spill
	jmp	LBB9_3
LBB9_2:
	movq	-40(%rbp), %rax
	movq	%rax, -176(%rbp)        ## 8-byte Spill
LBB9_3:
	movq	-176(%rbp), %rax        ## 8-byte Reload
	movq	%rax, -184(%rbp)        ## 8-byte Spill
## %bb.4:
	movq	-184(%rbp), %rax        ## 8-byte Reload
	movq	(%rax), %rax
	addq	$56, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.section	__TEXT,__const
l__ZZ4mainE1s:                          ## @_ZZ4mainE1s
	.space	1

	.p2align	2               ## @.ref.tmp
l_.ref.tmp:
	.long	1                       ## 0x1
	.long	2                       ## 0x2
	.long	3                       ## 0x3
	.long	4                       ## 0x4

	.p2align	2               ## @.ref.tmp.1
l_.ref.tmp.1:
	.long	3                       ## 0x3
	.long	1                       ## 0x1
	.long	4                       ## 0x4
	.long	2                       ## 0x2

	.section	__TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
	.asciz	"allocator<T>::allocate(size_t n) 'n' exceeds maximum supported size"


.subsections_via_symbols

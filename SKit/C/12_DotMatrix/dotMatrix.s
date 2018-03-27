	.arch armv6
	.eabi_attribute 27, 3
	.eabi_attribute 28, 1
	.fpu vfp
	.eabi_attribute 20, 1
	.eabi_attribute 21, 1
	.eabi_attribute 23, 3
	.eabi_attribute 24, 1
	.eabi_attribute 25, 1
	.eabi_attribute 26, 2
	.eabi_attribute 30, 6
	.eabi_attribute 34, 1
	.eabi_attribute 18, 4
	.file	"dotMatrix.c"
	.global	code_H
	.data
	.align	2
	.type	code_H, %object
	.size	code_H, 8
code_H:
	.byte	-1
	.byte	-1
	.byte	-1
	.byte	-1
	.byte	-1
	.byte	-1
	.byte	-1
	.byte	-1
	.global	code_L
	.align	2
	.type	code_L, %object
	.size	code_L, 8
code_L:
	.byte	-2
	.byte	-3
	.byte	-5
	.byte	-9
	.byte	-17
	.byte	-33
	.byte	-65
	.byte	127
	.text
	.align	2
	.global	init
	.type	init, %function
init:
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 1, uses_anonymous_args = 0
	stmfd	sp!, {fp, lr}
	add	fp, sp, #4
	mov	r0, #0
	mov	r1, #1
	bl	pinMode
	mov	r0, #1
	mov	r1, #1
	bl	pinMode
	mov	r0, #2
	mov	r1, #1
	bl	pinMode
	mov	r0, #0
	mov	r1, #0
	bl	digitalWrite
	mov	r0, #1
	mov	r1, #0
	bl	digitalWrite
	mov	r0, #2
	mov	r1, #0
	bl	digitalWrite
	ldmfd	sp!, {fp, pc}
	.size	init, .-init
	.align	2
	.global	hc595_in
	.type	hc595_in, %function
hc595_in:
	@ args = 0, pretend = 0, frame = 16
	@ frame_needed = 1, uses_anonymous_args = 0
	stmfd	sp!, {fp, lr}
	add	fp, sp, #4
	sub	sp, sp, #16
	mov	r3, r0
	strb	r3, [fp, #-13]
	mov	r3, #0
	str	r3, [fp, #-8]
	b	.L3
.L4:
	ldrb	r2, [fp, #-13]	@ zero_extendqisi2
	ldr	r3, [fp, #-8]
	mov	r3, r2, asl r3
	and	r3, r3, #128
	mov	r0, #0
	mov	r1, r3
	bl	digitalWrite
	mov	r0, #2
	mov	r1, #1
	bl	digitalWrite
	mov	r0, #1
	bl	delay
	mov	r0, #2
	mov	r1, #0
	bl	digitalWrite
	ldr	r3, [fp, #-8]
	add	r3, r3, #1
	str	r3, [fp, #-8]
.L3:
	ldr	r3, [fp, #-8]
	cmp	r3, #7
	ble	.L4
	sub	sp, fp, #4
	@ sp needed
	ldmfd	sp!, {fp, pc}
	.size	hc595_in, .-hc595_in
	.align	2
	.global	hc595_out
	.type	hc595_out, %function
hc595_out:
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 1, uses_anonymous_args = 0
	stmfd	sp!, {fp, lr}
	add	fp, sp, #4
	mov	r0, #1
	mov	r1, #1
	bl	digitalWrite
	mov	r0, #1
	bl	delay
	mov	r0, #1
	mov	r1, #0
	bl	digitalWrite
	ldmfd	sp!, {fp, pc}
	.size	hc595_out, .-hc595_out
	.section	.rodata
	.align	2
.LC0:
	.ascii	"setup wiringPi failed !\000"
	.text
	.align	2
	.global	main
	.type	main, %function
main:
	@ args = 0, pretend = 0, frame = 8
	@ frame_needed = 1, uses_anonymous_args = 0
	stmfd	sp!, {fp, lr}
	add	fp, sp, #4
	sub	sp, sp, #8
	bl	wiringPiSetup
	mov	r3, r0
	cmn	r3, #1
	bne	.L7
	ldr	r0, .L15
	bl	printf
	mov	r3, #1
	b	.L14
.L7:
	bl	init
.L13:
	mov	r3, #0
	str	r3, [fp, #-8]
	b	.L9
.L10:
	ldr	r2, .L15+4
	ldr	r3, [fp, #-8]
	add	r3, r2, r3
	ldrb	r3, [r3]	@ zero_extendqisi2
	mov	r0, r3
	bl	hc595_in
	ldr	r2, .L15+8
	ldr	r3, [fp, #-8]
	add	r3, r2, r3
	ldrb	r3, [r3]	@ zero_extendqisi2
	mov	r0, r3
	bl	hc595_in
	bl	hc595_out
	ldr	r3, [fp, #-8]
	add	r3, r3, #1
	str	r3, [fp, #-8]
.L9:
	ldr	r3, [fp, #-8]
	cmp	r3, #7
	bls	.L10
	mov	r3, #6
	str	r3, [fp, #-8]
	b	.L11
.L12:
	ldr	r2, .L15+4
	ldr	r3, [fp, #-8]
	add	r3, r2, r3
	ldrb	r3, [r3]	@ zero_extendqisi2
	mov	r0, r3
	bl	hc595_in
	ldr	r2, .L15+8
	ldr	r3, [fp, #-8]
	add	r3, r2, r3
	ldrb	r3, [r3]	@ zero_extendqisi2
	mov	r0, r3
	bl	hc595_in
	bl	hc595_out
	ldr	r3, [fp, #-8]
	sub	r3, r3, #1
	str	r3, [fp, #-8]
.L11:
	ldr	r3, [fp, #-8]
	cmp	r3, #0
	bgt	.L12
	b	.L13
.L14:
	mov	r0, r3
	sub	sp, fp, #4
	@ sp needed
	ldmfd	sp!, {fp, pc}
.L16:
	.align	2
.L15:
	.word	.LC0
	.word	code_L
	.word	code_H
	.size	main, .-main
	.ident	"GCC: (Raspbian 4.9.2-10) 4.9.2"
	.section	.note.GNU-stack,"",%progbits

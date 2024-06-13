N_ELEMENTS = 5
main:

	# $t0 : i
	# $t1 : array

main_i_init:
    	li	$t0,	0	# i = 0;
main_i_cond:
    	bge	$t0,	N_ELEMENTS,	main_i_end	# if (i >= N_ELEMENTS) goto main_i_end;
main_i_step:

	la	$t1,	array		# Base Address
	mul	$t3,	$t0,	4	# Calculate Offset 4 * i
	add	$t2,	$t1,	$t3	# Base Address + Offset

	lw	$a0,	($t2)		#     putchar(array[i]);
	li	$v0,	1
	syscall
	
	li	$v0,	11
	li	$a0,	'\n'		#     putchar('\n');
	syscall
	
	

    	addi	$t0,	1;
    	j 	main_i_cond;
main_i_end:
	


	li	$v0, 0
	jr	$ra			# return 0;

	.data

array:
	.word	5, 4, 3, 2, 2

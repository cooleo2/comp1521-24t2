main:
        
        # TODO: create loop for scanning
	# 	$t0 : i
main_while_i1_init:
   	li	$t0,	0	 #i = 0;
main_while_i1_cond:
        bge	$t0,	10,	main_while_i1_end #if (i >= 10) goto main_while_i1_end;

    	

	mul	$t2,	$t0,	4	# Offset (i*4)

    	li      $v0, 	5
        syscall			# scanf("%d", &numbers[i]);
	sw	$v0,	numbers($t2)	# Putting the val in $v0 to numbers[i]



main_while_i1_step:
    	addi	$t0,	1	#i++;
    	j main_while_i1_cond
main_while_i1_end:

        
        


main_while_i2_init:
   	li	$t0,	0	 #i = 0;
main_while_i2_cond:
        bge	$t0,	10,	main_while_i2_end #if (i >= 10) goto main_while_i1_end;

    	

	mul	$t2,	$t0,	4	# Offset (i*4)
	
	lw	$a0,	numbers($t2)	
	li	$v0,	1
	syscall




main_while_i2_step:
    	addi	$t0,	1	#i++;
    	j main_while_i2_cond
main_while_i2_end:
        
	li	$v0,	0
	jr	$ra

        .data
numbers:
        .word	0:10

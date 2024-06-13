main:

	# $t0 : i
	# $t1 : offset for x
	# $t2 : offset for y
	# $t3 : x
	# $t4 : y

main_while_i_init:
    	li	$t0,	0 # i = 0
    
main_while_i_cond:
    	bge	$t0, 	5, 	main_while_i_end  #(i >= 5) goto main_while_i_end;

	mul	$t1, 	$t0,	4 	# Offset for numbers[i] (x)

	sub	$t2,	9,	$t0	# Offset for numbers[9-i] (y)
	mul	$t2, 	$t2,	4

    	# int x = numbers[i];
	lw	$t3,	numbers($t1)


    	# int y = numbers[9 - i];
	lw	$t4,	numbers($t2)


	sw	$t4,	numbers($t1)
	sw	$t3,	numbers($t2)


    	#numbers[i] = y;
    	#numbers[9 - i] = x;

main_while_i_step:
    i++;
    goto main_while_i_cond
    
main_while_i_end:

        .data
numbers:
        .word   0, 1, 2, 3, 4, 5, 6, 7, 8, 9

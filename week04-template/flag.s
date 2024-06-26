N_COLS = 12
N_ROWS = 6

################################################################################
# .TEXT <main>
	.text
main:
	# Subset:   1
	#
	# Args:     void
	#
	# Returns:
	#    - $v0: int
	#
	# Frame:    [...]
	# Uses:     [...]
	# Clobbers: [...]
	#
	# Locals:
	#   - $t0: row
	#   - $t1: col
	#
	# Structure:
	#   main
	#   -> [prologue]
	#       -> body
	#   -> [epilogue]

main__prologue:
	# TODO: put your prologue for main here

main__body:

main__row_init:
    	li	$t0,	0	# row = 0;
main__row_cond:
    	bge	$t0,	6,	main__row_false 	# if (row >= 6) goto main__row_false;

main__col_init:
   	li	$t1,	0	# col = 0;
main__col_cond:
    	bge	$t1,	12,	main__col_false		# if (col >= 12) goto main__col_false;

    	# TODO: printf("%c", flag[row][col]);

main__col_step:
    	addi	$t1,	1	# col++;
    	j 	main__col_cond	# goto main__col_cond;
main__col_false:

    	li	$a0,	'\n'	# printf("\n");
	li	$v0,	11
	syscall

main__row_step:
    	addi	$t0,	1	# row++;
    	j	main__row_cond 	# goto main__row_cond;
main__row_false:

main__epilogue:
	# TODO: put your epilogue for main here

	jr	$ra
	
	
	.data
flag:

        .byte '#', '#', '#', '#', '#', '.', '.', '#', '#', '#', '#', '#',
        .byte '#', '#', '#', '#', '#', '.', '.', '#', '#', '#', '#', '#',
        .byte '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.',
        .byte '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.',
        .byte '#', '#', '#', '#', '#', '.', '.', '#', '#', '#', '#', '#',
        .byte '#', '#', '#', '#', '#', '.', '.', '#', '#', '#', '#', '#'

main:
    # $t0 = n
    # $t1 = fac
    # $t2 = i
    
    la		$a0, n_eq_str  	    # printf("n  = ");
    li		$v0, 4
    syscall

    li      	$v0, 5          # scanf("%d", &n);
    syscall
    move    	$t0, $v0
    
    li		$t1, 1 		        # int fac 1


main_i_init:
    li		$t2, 1		        # int i = 1

main_i_cond:
    bgt 	$t2, $t0, main_i_false

    
    mul		$t1, $t1, $t2       # fac = fac * i;

main_i_step:
    addi	$t2, 1
    j 		main_i_cond

main_i_false:
	li	    $v0, 1				# printf("%d", fac);
	move	$a0, $t1
	syscall	

    li	    $v0, 11				# printf("\n");
	li	    $a0, '\n'
	syscall

    li      $v0, 0
    jr      $ra


.data
n_eq_str:
    .asciiz "n  = "

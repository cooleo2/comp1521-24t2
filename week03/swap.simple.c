#include <stdio.h>

int main(void) {
    int i;
    int numbers[10] = {0,1,2,3,4,5,6,7,8,9};

main_while_i_init:
    i = 0;
    
main_while_i_cond:
    if  (i >= 5) goto main_while_i_end;

    int x = numbers[i];
    int y = numbers[9 - i];
    numbers[i] = y;
    numbers[9 - i] = x;

main_while_i_step:
    i++;
    goto main_while_i_cond
    
main_while_i_end:

}

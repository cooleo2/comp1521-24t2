// non recursively calculate a factorial in C
// Abiram Nadarajah, Feb 2022

#include <stdio.h>

int main(void) {
    int n;
    printf("n  = ");
    scanf("%d", &n);

    int fac = 1;

    int i;

main_i_init:
    i = 1;
main_i_cond:
    if (i > n) goto main_i_false;

    // Contents of the loop
    fac *= i;

main_i_step:
    i++;
    goto main_i_cond;
main_i_false:

    printf("n! = %d\n", fac);
    return 0;
}

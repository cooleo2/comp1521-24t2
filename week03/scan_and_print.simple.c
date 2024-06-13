#include <stdio.h>

int main(void) {
    int i;
    int numbers[10] = {0};

main_while_i1_init:
    i = 0;
main_while_i1_cond:
    if (i >= 10) goto main_while_i1_end;

    scanf("%d", &numbers[i]);
main_while_i1_step:
    i++;
    goto main_while_i1_cond;
main_while_i1_end:

main_while_i2_init:
    i = 0;
main_while_i2_cond:
    if (i >= 10) goto main_while_i2_end;

    printf("%d ", numbers[i]);
main_while_i2_step:
    i++;
    goto main_while_i2_cond;
main_while_i2_end:

}

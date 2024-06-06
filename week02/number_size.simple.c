#include <stdio.h>

int main(void) {
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    
main_x_lt_100:
    if (x < 100) goto main_small_big;
main_x_gt_1000:
    if (x > 1000) goto main_small_big;
main_x_medium:
    printf("medium\n");
    goto main_x_end;

main_small_big:
    printf("small/big\n");

main_x_end:

}

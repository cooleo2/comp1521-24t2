#include <stdio.h>
#define N_ROWS 6
#define N_COLS 12


char flag[N_ROWS][N_COLS] = {
    {'#', '#', '#', '#', '#', '.', '.', '#', '#', '#', '#', '#'},
    {'#', '#', '#', '#', '#', '.', '.', '#', '#', '#', '#', '#'},
    {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
    {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
    {'#', '#', '#', '#', '#', '.', '.', '#', '#', '#', '#', '#'},
    {'#', '#', '#', '#', '#', '.', '.', '#', '#', '#', '#', '#'}
};

int main(void) {

    int row;
    int col;

main__row_init:
    row = 0;
main__row_cond:
    if (row >= 6) goto main__row_false;

main__col_init:
    col = 0;
main__col_cond:
    if (col >= 12) goto main__col_false;

    printf("%c", flag[row][col]);

main__col_step:
    col++;
    goto main__col_cond;
main__col_false:

    printf("\n");

main__row_step:
    row++;
    goto main__row_cond;
main__row_false:

}

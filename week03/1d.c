#include <stdio.h>
#define N_ELEMENTS 5

int main(void) {
    int array[N_ELEMENTS] = {5, 4, 3, 2, 2};

    for (int i = 0; i < N_ELEMENTS; i++) {
        putchar(array[i]);
        putchar('\n');
    }

    return 0;
}


// What if we had
// int array[N_ELEMENTS] = {3, 1, 4, 1, 5};


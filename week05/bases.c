#include <stdio.h>

int main(void) {
    int n;
    printf("Enter a value: ");
    scanf("%d", &n);

    printf("%d\n", n);  // Decimal
    printf("0x%x\n", n);// Hexadecimal
    printf("0%o\n", n); // Octal

    return 0;
}

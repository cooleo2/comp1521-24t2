#include <stdio.h>
#include <stdint.h>

void print_word_binary(char *string, uint32_t value);
uint32_t get_bits_from_float(float value);

int main(void) {
    float val = 2.5;
    print_word_binary("Sign | Exponent | Mantissa", get_bits_from_float(val));
    return 0;
}

////////////// HELPER FUNCTIONS //////////////
// Not part of course content //
void print_word_binary(char *string, uint32_t value) {
    printf("%s\n", string);
    for (int i = 31; i >= 0; i--) {
        // Add space between the float sections
        if (i == 30 || i == 22) {
            printf("  |  ");
        }
        putchar(((value & ((uint32_t)0x1 << i)) >> i) + 48);
    }
    putchar('\n');
}

typedef union float_store {
    float float_val;
    uint32_t bit_val;
} float_store_t;

uint32_t get_bits_from_float(float value) {
    float_store_t float_one;
    float_one.float_val = value;
    return float_one.bit_val;
}
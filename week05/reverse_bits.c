#include <assert.h>
#include <stdio.h>
#include <stdint.h>

// Helper function
void print_word_binary(char *string, uint32_t value);

uint32_t reverse_bits(uint32_t value) {
    print_word_binary("Value: ", value);

    uint32_t reversed = 0;

    for (int i = 0; i < 32; i++) {
        // Create a mask with a 1 at the ith bit position
        // Eg. if i = 2, mask = 0100
        uint32_t mask = 0x1;
        mask = mask << i;   

        // Bitwise AND the mask with the value to check if the ith bit
        // is a one or a zero
        uint32_t current_bit = value & mask;

        // Bitshift this bit all the way to the right, so that it is
        // 0001 as opposed to something like 0100 (when i = 2)
        current_bit >>= i;

        // Bitshift our bit into the correct bit position;
        reversed = reversed | (current_bit << (32 - i - 1) );
    }

    return reversed;
}

int main(void) {
    assert(reverse_bits(0xFFFFFFFF) == 0xFFFFFFFF);
    assert(reverse_bits(0x00000000) == 0x00000000);
    assert(reverse_bits(0x1) == 0x80000000);
    assert(reverse_bits(0x2) == 0x40000000);
    assert(reverse_bits(0x01234567) == 0xE6A2C480);
    printf("All tests passed!\n");
    return 0;
}

////////////// HELPER FUNCTIONS //////////////
void print_word_binary(char *string, uint32_t value) {
    printf("%s\n", string);
    for (int i = 31; i >= 0; i--) {
        putchar(((value & ((uint32_t)0x1 << i)) >> i) + 48);
    }
    putchar('\n');
}
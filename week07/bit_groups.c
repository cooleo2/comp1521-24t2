#include <stdio.h>
#include <stdint.h>
 
typedef struct six_bit_groups {
    uint8_t middle_bits;
    uint8_t lower_bits;
} six_bit_groups_t;

/* 
For example:
00000000 00000101 01000000 01110110 

 
middle six bits are 10 1010
 lower six bits are 11 0110  
*/
 
// TODO
six_bit_groups_t get_bit_groups(uint32_t value) {
    six_bit_groups_t result;
    

    // Masking lower 6 bits
    result.lower_bits = value & 0x3F;

    // Shifting right to get the middle 6 bits
    uint32_t val_shifted = value >> 13;
    // Masking 6 bits
    result.middle_bits = val_shifted & 0x3F;

    

    return result;
}
 
int main(void) {
    six_bit_groups_t result = get_bit_groups(344182);
    printf("Lower: 0x%x, Middle: 0x%x\n", result.lower_bits, result.middle_bits);
    return 0;
}

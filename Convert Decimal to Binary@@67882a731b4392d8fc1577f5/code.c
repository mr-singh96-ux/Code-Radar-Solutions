#include <stdio.h>

int main() {
    int num, i;
    int leading_zero = 1; // Flag to skip leading zeros

    printf("Enter a decimal number: ");
    scanf("%d", &num);

    printf("Binary representation: ");
    // Loop through each bit from the most significant bit to the least significant bit
    for (i = 31; i >= 0; i--) {
        int bit = (num >> i) & 1; // Extract the ith bit using right shift and bitwise AND
        if (bit == 1) {
            leading_zero = 0; // Stop skipping once the first '1' is found
        }
        if (!leading_zero) {
            printf("%d", bit);
        }
    }
    if (leading_zero) {
        // In case the number is 0
        printf("0");
    }
    printf("\n");

    return 0;
}

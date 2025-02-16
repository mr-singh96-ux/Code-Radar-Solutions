#include <stdio.h>

int main() {
    int num, i;
    scanf("%d", &num);
    // Loop through each bit from the most significant bit to the least significant bit
    for (i = 31; i >= 0; i--) {
        int bit = (num >> i) & 1; // Extract the ith bit using right shift and bitwise AND
        printf("%d", bit);
    }
    printf("\n");

    return 0;
}

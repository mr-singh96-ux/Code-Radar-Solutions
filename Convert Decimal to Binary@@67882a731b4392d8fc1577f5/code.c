#include <stdio.h>

int main() {
    int num, i, leading_zero = 1;
    scanf("%d", &num);
    for (i = 31; i >= 0; i--) {
        int bit = (num >> i) & 1;
        if (bit == 1) {
            leading_zero = 0;
        }
        if (!leading_zero) {
            printf("%d", bit);
        }
    }
    if (leading_zero) {
        printf("0");
    }
    printf("\n");

    return 0;
}
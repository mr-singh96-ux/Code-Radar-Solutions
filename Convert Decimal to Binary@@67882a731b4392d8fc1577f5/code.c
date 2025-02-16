// Your code here...#include <stdio.h>

int main() {
    int num, binary[32], i = 0;
    scanf("%d", &num);

    // Extracting bits and storing them in an array
    while (num > 0) {
        binary[i] = num % 2;
        num = num / 2;
        i++;
    }

    // Printing the binary number in reverse order
    printf("Binary representation: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");

    return 0;
}

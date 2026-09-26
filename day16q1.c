#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("\nBinary representation: 0\n");
    } else {
        printf("\nBinary representation of %d: ", num);

        int started = 0;
        int bits = sizeof(int) * 8;

        if (num < 0) {
            for (int i = bits - 1; i >= 0; i--) {
                int bit = (num >> i) & 1;
                printf("%d", bit);
            }
        } else {
            for (int i = bits - 1; i >= 0; i--) {
                int bit = (num >> i) & 1;
                if (bit == 1) {
                    started = 1;
                }
                if (started) {
                    printf("%d", bit);
                }
            }
        }
        printf("\n");
    }

    return 0;
}
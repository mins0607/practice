#include <stdio.h>

int main(void) {
    int n;
    int max = 0;
    int min = 0;
    int first = 1;

    while (1) {
        scanf("%d", &n);

        if (n == 0) {
            break;
        }

        if (n >= 1 && n <= 100) {
            if (first) {
                max = n;
                min = n;
                first = 0;
            } else {
                if (n > max) {
                    max = n;
                }
                if (n < min) {
                    min = n;
                }
            }
        }
    }

    printf("MAX = %d\n", max);
    printf("MIN = %d\n", min);

    return 0;
}
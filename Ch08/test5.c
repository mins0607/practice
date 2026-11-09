#include <stdio.h>

int main(void) {
    int num;
    int max, min;

    scanf("%d", &num);

    if (num == 0)
        return 0;

    max = num;
    min = num;

    while (1) {
        scanf("%d", &num);

        if (num == 0)
            break;

        if (num > max)
            max = num;

        if (num < min)
            min = num;
    }

    printf("%d\n", max + min);

    return 0;
}
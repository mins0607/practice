#include <stdio.h>

int main(void) {
    int arr[10];
    int sum = 0;
    int odd_sum = 0;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);

        if (i % 2 == 0)
            odd_sum += arr[i];
        else
            sum += arr[i];
    }

    printf("sum : %d\n", sum);
    printf("avg : %.1f\n", odd_sum / 5.0);

    return 0;
}
#include <stdio.h>

int main() {
    int arr[100];
    int count = 0;
    int sum = 0;
    int multiples_count = 0;

    for (int i = 0; i < 100; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] == 0) {
            break;
        }
        count++;
    }

    for (int i = 0; i < count; i++) {
        if (arr[i] % 5 == 0) {
            sum += arr[i];
            multiples_count++;
        }
    }

    printf("Multiples of 5 : %d\n", multiples_count);
    printf("sum : %d\n", sum);
    
    if (multiples_count == 0) {
        printf("avg : 0.0");
    } else {
        printf("avg : %.1f", (double)sum / multiples_count);
    }

    return 0;
}
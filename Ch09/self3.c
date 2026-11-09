#include <stdio.h>

int main() {
    int arr[100];
    scanf("%d", &arr[1]);

    arr[0] = 100;
    
    int i = 1;
    while (1) {
        int next = arr[i - 1] - arr[i];
        arr[i + 1] = next;
        if (next < 0) {
            break;
        }
        i++;
    }

    for (int j = 0; j <= i + 1; j++) {
        printf("%d ", arr[j]);
    }

    return 0;
}

#include <stdio.h>

int main() {
    int arr[3] = {10, 20, 30};
    int *p = arr;

    printf("%d\n", (*p)++);

    p = arr;
    printf("%d\n", (*p) + 1);

    p = arr;
    *p += 1;
    printf("%d\n", *p);

    p = arr;
    (*p) += 1;
    printf("%d\n", *p);

    p = arr;
    *p = *p + 1;
    printf("%d\n", *p);

    p = arr;
    printf("%d\n", ++(*p));

    p = arr;
    printf("%d\n", ++(*p));

    return 0;
}

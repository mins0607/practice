#include <stdio.h>

int main() {
    int sum;
    double avg;
    int score;

    for (int i = 0; i < 5; i++) {
        sum = 0;
        for (int j = 0; j < 4; j++) {
            scanf("%d", &score);
            sum += score;
        }
        avg = sum / 4.0;
        printf("%d %.1lf\n", sum, avg);
    }

    return 0;
}


#include <stdio.h>

int main() {
    int height, weight, bmi;
    
    scanf("%d %d", &height, &weight);
    
    bmi = weight + 100 - height;
    
    printf("%d\n", bmi);
    
    if (bmi > 0) {
        printf("Obesity\n");
        printf("Need control\n");
    }
    
    return 0;
}
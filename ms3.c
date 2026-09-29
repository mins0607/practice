#include <stdio.h>

int main()
    {
    int a,b,c;
    scanf("%d %d %d, &a, &b, &c);

    int total=a*b*c;
    int count[10]={0};

    while(total>0){
    int num=total%10;
    count[num]++;
    total=total/10;
    }
    
    for(int i=0; i<10; i++){
    printf("%d\n",count[i]);
    }
    
    return 0;
    
    }

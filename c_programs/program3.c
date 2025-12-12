//Program to calculate electricity bills based on rate slabs
#include <stdio.h>

int main() {
    int n,sum=0;
    printf("Enter units:");
    scanf("%d",&n);
    if(n<101)
        sum+=n*5;
        
    else if(n<301)
        sum+=100*5+(n-100)*8;
    else
        sum+=100*5+200*8+(n-300)*10;
    printf("Total cost=%drs",sum);
    return 0;
}
    
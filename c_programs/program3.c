//Program to calculate electricity bills based on rate slabs
#include <stdio.h>
#include <stdlib.h>

int main() {
    float n,sum=0;
    printf("Enter units:");
    if (scanf("%f", &n) != 1) {
        printf("Invalid input");
        exit(0);
                              }
    if(n<0){
        printf("Enter postive no of units");
        exit(0);
           }
    if(n<101)
        sum+=n*5;
        
    else if(n<301)
        sum+=100*5+(n-100)*8;
    else
        sum+=100*5+200*8+(n-300)*10;
    printf("Total cost=%0.3frs",sum);
    return 0;
}
    

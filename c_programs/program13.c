//program to print triangle of stars
#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,i,j;
    printf("Enter no of rows:");
    if(scanf("%d",&n)!=1){
        printf("Invalid type");
        exit(0);         }
    if(n<1){
        printf("Enter number greater than 0");
        exit(0);
           }
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++)
            printf(" ");//printing spaces in between
        for(j=1;j<=i;j++)
            printf("* ");
        printf("\n");

    }
    return 0;
}


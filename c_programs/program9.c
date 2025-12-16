//Program to input 4X4 matrix and find out sum of both diagonal elements and sum of all elements
#include <stdio.h>
#include <stdlib.h>
int main(){
    int a[10][10],i,j,sum=0,sum1=0,sum2=0;
    printf("Enter 4X4 matrix elements:\n");
    for(i=0;i<4;i++)
        for(j=0;j<4;j++){
            if(scanf("%d",&a[i][j])!=1){
                printf("Invalid type");
                exit(0);
                                       }
                        }
    for(i=0;i<4;i++)
        for(j=0;j<4;j++)
            sum+=a[i][j];
    printf("Matrix=\n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++)
            printf("%d\t",a[i][j]);
            printf("\n");}
    printf("Sum of elements=%d\n",sum);
    for(i=0;i<4;i++)
        for(j=0;j<4;j++){
            if(i==j)
                sum1+=a[i][j];
                        }
    for(i=0;i<4;i++)
        sum2+=a[i][4-i-1];
    printf("Sum of first diagonal=%d\n",sum1);
    printf("Sum of second diagonal=%d\n",sum2);
    return 0;
}
    
    
    

//Program to rotate a matrix by 90 degree clockwise
#include <stdio.h>
#include <stdlib.h>
int main(){
    int a[50][50],b[50][50],i,j,r,c;
    printf("Enter no of rows:");
    scanf("%d",&r);
    if(r<1){
        printf("Enter number greater than 0");
        exit(0);}
    printf("Enter no of columns:");
    scanf("%d",&c);
    if(c<1){
        printf("Enter number greater than 0");
        exit(0);}
                                
    printf("Enter elements:\n");//inputting matrix
    for(i=0;i<r;i++)
        for(j=0;j<c;j++){
            if(scanf("%d",&a[i][j])!=1){
                printf("Invalid input");
                exit(0);}}
                                //printing original matrix
    printf("Matrix=\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++)
            printf("%d\t",a[i][j]);
            printf("\n");}
                                 //rotating
    for(i=0;i<r;i++){
        for(j=0;j<c;j++)
            b[j][r-i-1]=a[i][j];
                    } 
                                  //printing new matrix
    printf("New Matrix=\n");
    for(i=0;i<c;i++){
        for(j=0;j<r;j++)
            printf("%d\t",b[i][j]);
            printf("\n");}                   
    
    return 0;
}
    
    
    

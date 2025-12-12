//Program to rotate a matrix by 90 degree
#include <stdio.h>
int main(){
    int a[10][10],i,j,temp;
    printf("Enter elements:\n");
    for(i=0;i<4;i++)
        for(j=0;j<4;j++)
            scanf("%d",&a[i][j]);
    //printing matrix
    printf("Matrix=\n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++)
            printf("%d\t",a[i][j]);
            printf("\n");}
    //transpose
    for(i=0; i<4; i++){
        for(j=i+1; j<4; j++){
            temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
                            }
                      }
    //reversing each row
    for(i=0; i<4; i++){
        for(j=0; j<2; j++){
            temp = a[i][j];
            a[i][j] = a[i][4-1-j];
            a[i][4-1-j] = temp;
                          }
                      }
                      
    printf("New Matrix=\n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++)
            printf("%d\t",a[i][j]);
            printf("\n");}                   
    
    return 0;
}
    
    
    
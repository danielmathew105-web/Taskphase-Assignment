//Program to swap adjacent elements
#include <stdio.h>
int main(){
    int n,i;
    int a[50],temp;
    int *p=a;
    printf("Enter length of array:");
    scanf("%d",&n);
    printf("Enter elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Original array=\n");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
    for(i=0;i<n-1;i+=2){
        temp=*(p+i);
        *(p+i)=*(p+i+1);
        *(p+i+1)=temp; }
    printf("\nNew array=\n");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
    return 0;
}
    
    
    
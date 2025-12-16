//program to determine if the sum of three user-input integers is even or odd as well as if the number is prime or composite
#include <stdio.h>
#include <stdlib.h>

int main() {
    int a,b,c,sum=0,i,flag=0;
    printf("Enter 1st number:");
    if (scanf("%d",&a)!=1){
        printf("Invalid type");
        exit(0);          }
    printf("Enter 2nd number:");
    if (scanf("%d",&b)!=1){
        printf("Invalid type");
        exit(0);          }
    printf("Enter 3rd number:");
    if (scanf("%d",&c)!=1){
        printf("Invalid type");
        exit(0);          }
    
    sum=a+b+c;

    if(sum%2==0)
        printf("Sum, %d is Even\n",sum);
    else
        printf("Sum, %d is Odd\n",sum);

    for(i=2;i<=sum/2;i++){
        if(sum%i==0){
            flag=1;
            break;  }}
    if(sum==0 || sum==1)
        printf("Sum, %d is neither prime nor composite",sum);
    else if(sum<0)
            printf("%d is a negative number and is neither prime nor composite",sum);
    else if(flag==1)
        printf("Sum, %d is Composite",sum);
    
    
    else
        printf("Sum, %d is Prime",sum);    

    return 0;
}

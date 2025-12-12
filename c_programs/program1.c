//program to determine if the sum of three user-input integers is even or odd as well as if the
//number is prime or composite
#include <stdio.h>

int main() {
    int a,b,c,sum=0,i,flag=0;
    printf("Enter 1st number:");
    scanf("%d",&a);
    printf("Enter 2nd number:");
    scanf("%d",&b);
    printf("Enter 3rd number:");
    scanf("%d",&c);
    sum=a+b+c;
    if(sum%2==0)
        printf("Sum is Even\n");
    else
        printf("Sum is Odd\n");
    for(i=2;i<sum/2;i++){
        if(sum%i==0){
            flag=1;
            break;  }}
    if(flag==1)
        printf("Sum is Composite");
    
    else
        printf("Sum is Prime");    

    return 0;
}

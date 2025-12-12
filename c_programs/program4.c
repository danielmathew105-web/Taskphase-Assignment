//Program to create a simple login system with 3 attempts
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    int i;
    char a[50],b[50];
    printf("Enter original password:");
    scanf("%s",&a);
    
    for(i=0;i<3;i++){
        printf("Confirm password:");
        scanf("%s",&b);
        if(strcmp(a,b)==0){
            printf("Correct password");
            exit(0);}
        else
            printf("Wrong password, try again\n");
                    }
return 0;
}
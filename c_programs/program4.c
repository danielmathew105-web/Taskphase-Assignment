//Program to create a simple login system with 3 attempts
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    int i;
    char a[50],b[50];
    printf("Enter password:");
    fgets(a,sizeof(a),stdin);//so that spaces can be included
    a[strcspn(a, "\n")] = '\0';//removing newline from the end of the password
    for(i=0;i<3;i++){
        printf("Confirm password:");
        fgets(b,sizeof(b),stdin);//so that spaces can be included
        b[strcspn(b, "\n")] = '\0';//removing newline from the end of the password
        
        if(i==2 && strcmp(a,b)!=0){
            printf("3 attempts over, exiting");
            exit(0);}
        if(strcmp(a,b)==0){
            printf("Correct password");
            exit(0);}
        else 
            printf("Wrong password, try again\n");
                    }
return 0;
}

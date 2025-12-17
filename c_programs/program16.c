//program to Implement a recursive function to compress a string by replacing consecutive duplicate characters with their count
#include <stdio.h>
void frequency(char a[50],int index);
int main(){
    char a[50];
    printf("Enter string:");
    fgets(a,sizeof(a),stdin);
    printf("Required output:");
    frequency(a,0);
    return 0;
          }
void frequency(char a[50],int i){
    int j,c=0;
    if(a[i]=='\0')//checking end of string
        return;
    if(a[i]==' ' || a[i]=='\n'){
        frequency(a,i+1);   //ignoring seperators
        return;                }

    for(j=0;j<i;j++)   //checking if character which is already processed is duplicated
        if(a[j]==a[i])
            return frequency(a,i+1);    //moving onto next character if character was already processed earlier
                    
    for(j=0;a[j]!='\0';j++){    //checking duplication
        if(a[j]==a[i])
            c++;           }
    if(c>1)
        printf("%c%d",a[i],c);
    else
        printf("%c",a[i]);
    frequency(a,i+1);   //recursive call
}

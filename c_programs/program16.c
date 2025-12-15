//program to Implement a recursive function to compress a string by replacing consecutive duplicate characters with their count
#include <stdio.h>
void compress(char a[50],int index);
int main(){
    char a[50];
    printf("Enter string:");
    scanf("%s",a);
    printf("Required output:");
    compress(a,0);
    return 0;
          }
void compress(char a[50],int i){
    int c=1;
    if(a[i]=='\0')//checking end of string
        return;
    while(a[i]==a[i+c])//checking if consecutive terms are equal
        c++;
    printf("%c%d",a[i],c);
    compress(a,i+c);//moving onto the next letter

                                }

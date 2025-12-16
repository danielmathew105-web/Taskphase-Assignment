//Program to count no of vowels and consonants and to scramble letters randomly
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int v=0,c=0,n,i;
    char x[50];
    printf("Enter string:");
    fgets(x, sizeof(x), stdin);
    x[strcspn(x,"\n")]='\0';//removing newline  
    n=strlen(x);
    for(i=0;i<n;i++){
        if((x[i]>='A'&&x[i]<='Z') || (x[i]>='a'&&x[i]<='z')){   //checking for alphabets
            if(x[i]=='a' || x[i]=='e' || x[i]=='i' || x[i]=='o' || x[i]=='u' || x[i]=='A' || x[i]=='E' || x[i]=='I' || x[i]=='O' || x[i]=='U')
                v++;
            else
                c++;
                            }                               
                    }        
    
    printf("No of vowels and consonants are %d and %d\n",v,c);
    //Scrambling
    srand(time(NULL));//randomises the scrambling order
    for (i = 0; i < n - 1; i++) {
        int j = i + rand() % (n - i); //adjusting range so that elements don't get re-shuffled
        char temp = x[i];
        x[i] = x[j];//swaps current element with a random element
        x[j] = temp;
                                }
    printf("Scrambled string:\n%s", x);
return 0;
}

//program to print word,line,character count from a file
#include <stdio.h>
int main(){
    FILE *f;
    char ch, prev=' ';
    int i,wc=0,lc=0,cc=0;
    f=fopen("input.txt","r");
    if(f==NULL){
        printf("CAN'T OPEN THE FILE");//Checks if fopen() opened the file or not
        return 1;}
    while((ch=fgetc(f))!=EOF){
        cc++;//character count increase
        if(ch=='\n')
            lc++;//line count increase
        if(ch!=' ' && ch!='\n' && ch!='\t'){        //checking if the character is a seperator
            if(prev==' ' || prev=='\n' || prev=='\t')   //checking if the character before ch was a seperator
                wc++;//word count increase
                                           }
                prev=ch;
                             }
    printf("Character count=%d\n",cc);
    printf("Word count=%d\n",wc);
    printf("Line count=%d\n",lc);
return 0;
                            }

//program to print line,word,character count of a given string
#include <stdio.h>
int main(){
    FILE *f;
    char ch;
    int i,wc=1,lc=0,cc=0;
    f=fopen("input.txt","r");
    if(f==NULL){
        printf("CAN'T OPEN THE FILE");//Checks if fopen() opened the file or not
        return 1;}
    while((ch=fgetc(f))!=EOF){
        cc++;//character count increase
        if(ch=='\n')
            lc++;//line count increase
        if(ch==' ' || ch=='\n')
            wc++;//word count increase
                             }
    printf("Character count=%d\n",cc);
    printf("Word count=%d\n",wc);
    printf("Line count=%d\n",lc);
return 0;
}

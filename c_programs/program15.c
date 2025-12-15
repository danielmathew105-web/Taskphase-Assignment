#include <stdio.h>
int fib(int n,int a,int b);//function prototype
int main(){
    int n;
    printf("Enter positive no of terms:");
    scanf("%d",&n);
    printf("%dth term of the fibonacci series=%d",n,fib(n-1,0,1));
    return 0;
          }
int fib(int x,int a,int b){//defining function
    int c;
    if(x==0)
        return a;
    c=a+b;
    return(fib(x-1,b,c));
                        }

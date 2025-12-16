//Program to find out second largest element
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int main(){
    int n,i,l,sl;
    int a[50],temp;
    int *p=a;
    printf("Enter length of array:");
    scanf("%d",&n);
    printf("Enter elements:\n");
    for(i=0;i<n;i++)
        if(scanf("%d",&a[i])!=1){    //checking for invalid type entered
            printf("Invalid type");
            exit(0);            }
    
    l = *p;           // arr[0]
    sl = INT_MIN;     // smallest integer possible

    for(i=1;i<n;i++){
        if (*(p+i) > l) {
            sl = l;
            l = *(p+i);
                        }
        else if (*(p+i) > sl && *(p+i)<l) { //ensuring duplication doesn't affect output
            sl = *(p+i);
                              }
                    }
            
       
    printf("2nd largest=%d",sl);
    return 0;
    
}
    
    
    

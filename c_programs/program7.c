//Program to find out second largest element
#include <stdio.h>
int main(){
    int n,i,l,sl;
    int a[50],temp;
    int *p=a;
    printf("Enter length of array:");
    scanf("%d",&n);
    printf("Enter elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    
    l = *p;           // arr[0]
    sl = 0;     // very small number

    for(i=1;i<n;i++){
        if (*(p+i) > l) {
            sl = l;
            l = *(p+i);
                        }
        else if (*(p+i) > sl) {
            sl = *(p+i);
                              }
                    }
            
    printf("2nd largest=%d",sl);
    return 0;
    
}
    
    
    
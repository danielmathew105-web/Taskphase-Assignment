//Program to delete duplicates from an array
#include <stdio.h>

int main() {
    int n,i,j,k;
    int a[50];

    printf("Enter size of array: ");
    scanf("%d",&n);

    printf("Enter elements:\n");
    for (i=0;i<n;i++) 
        scanf("%d", &a[i]);
    
    for (i=0;i<n;i++) {
        for (j=i+1;j<n;j++) {
            if (a[i]==a[j]) {
                for (k=j;k<n-1;k++) 
                    a[k]=a[k + 1];
                                            
                n--;      
                j--;              }  
                                    }
                            }
    printf("Array after removing duplicates:\n");
    for (i=0;i<n;i++) {
        printf("%d\t",a[i]);
    }
    return 0;
}

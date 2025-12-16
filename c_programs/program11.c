//Program to implement bubble sort and binary search
#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i,j,temp,key,low,high,mid,found,c,min;
    int a[100];
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter %d elements:\n",n);
    for (i=0;i<n;i++)
        scanf("%d",&a[i]);
    
    printf("Enter 1.Bubble Sort or 2.Selection Sort: ");
    scanf("%d",&c);
    
    //bubble sort
    if(c==1){
        for (i=0;i<n-1;i++) {
            for (j=0;j<n-1-i;j++) {
                if (a[j]>a[j+1]) {
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                                 }
                                  }
                            }
            } 
    //selection sort
    else if(c==2){
        for(i=0;i<n-1;i++){
            min=i; //assuming i is minimum index
            for(j=i+1;j<n;j++){
                if(a[j]<a[min])
                    min=j;}    
        if(min!=i){
            temp=a[i];
            a[i]=a[min];
            a[min]=temp;}
                         }
                }
    else{
        printf("Invalid input");
        exit(0);}

    //sorted array
    printf("Sorted Array: ");
    for (i=0;i<n;i++)
        printf("%d\t",a[i]);
    printf("\n");

    //searching
    printf("Enter element to search:");
    scanf("%d",&key);
    low=0;
    high=n-1;
    found=0;
    
    while (low<=high) {             //binary search
        mid=(low+high)/2;
        if (a[mid]==key) {
            printf("Element found at position %d",mid+1);
            found=1;
            break;
                         }
        else if(key>a[mid])
            low=mid+1;
        else
            high=mid-1;
                       }
    if(found==0)
        printf("Element not found");
    return 0;
}

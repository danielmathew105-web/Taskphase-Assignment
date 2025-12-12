//Program to implement structure and find out details of products having max qty and price
#include <stdio.h>
struct Product{
    int id;
    int qty;
    char pn[50];
    float pr;
              };
              
int main() {
    int n,i;
    float t=0;
    printf("Enter no of products:");
    scanf("%d",&n);
    struct Product p[n];
    for(i=0;i<n;i++){
        printf("Enter product details:\n");
        printf("Enter id:");
        scanf("%d",&p[i].id);
        printf("Enter qty:");
        scanf("%d",&p[i].qty);
        printf("Enter product name:");
        scanf("%s",&p[i].pn);
        printf("Enter price:");
        scanf("%f",&p[i].pr);
        t+=p[i].qty*p[i].pr;
                    }
    printf("Total price=%0.2f\n",t);
    
    int imaxq=0,imaxp=0;

    for (i=1;i<n;i++) {
        if (p[i].qty>p[imaxq].qty) 
            imaxq=i;
        if (p[i].pr>p[imaxp].pr) 
            imaxp=i;
                      }
    printf("Product with Highest Quantity:\n");
    printf("ID:%d\nName:%s\nQuantity:%d\nPrice:%.2f\n",p[imaxq].id, p[imaxq].pn,p[imaxq].qty, p[imaxq].pr);

    printf("Product with Highest Price:\n");
    printf("ID:%d\nName:%s\nQuantity:%d\nPrice:%.2f\n",p[imaxp].id, p[imaxp].pn,p[imaxp].qty, p[imaxp].pr);
    
    return 0;
}

//Program to implement structure and find out details of products having max qty and price
#include <stdio.h>
#include <stdlib.h>
struct Product{
    int id;
    int qty;
    char pn[50];
    float pr;
              };
              
int main() {
    int n,i,j,d=0;
    float t=0;
    printf("Enter no of products:");
    scanf("%d",&n);
    struct Product p[n];
    for(i=0;i<n;i++){
        printf("Enter product details of %d:\n",i+1);
        printf("Enter id:");
        if(scanf("%d",&p[i].id)!=1){
            printf("Invalid input, enter an integer");
            exit(0);             }
        d=0;    //resetting for each case
        for(j=0;j<i;j++){    //checking duplicate id
            if(p[i].id==p[j].id){
                d=1;    
                break;  }       }
        if(d==1){
            printf("Enter another id\n");
            i--;    //repeating this iteration
            continue;   }
        
        printf("Enter qty:");
        if(scanf("%d",&p[i].qty)!=1){
            printf("Invalid input, enter an integer");
            exit(0);             }
        
        printf("Enter product name:");
        getchar();    //removes newline character
        fgets(p[i].pn,sizeof(p[i].pn),stdin);
        
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
    printf("\nProduct with Highest Quantity:\n");
    printf("ID:%d\nName:%s\nQuantity:%d\nPrice:%.2f\n",p[imaxq].id, p[imaxq].pn,p[imaxq].qty, p[imaxq].pr);

    printf("\nProduct with Highest Price:\n");
    printf("ID:%d\nName:%s\nQuantity:%d\nPrice:%.2f\n",p[imaxp].id, p[imaxp].pn,p[imaxp].qty, p[imaxp].pr);
    
    return 0;
}

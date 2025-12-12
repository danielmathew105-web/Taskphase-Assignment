//program that converts seconds into hours, minutes, and remaining seconds
#include <stdio.h>

int main() {
    int n,hrs,min,sec,x;
    printf("Enter no of seconds:");
    scanf("%d",&n);
    hrs=n/3600;
    min=n%3600;
    x=min/60;
    sec=n%60;
    printf("The time in hours:minutes:seconds = %d: %d : %d",hrs,x,sec);
return 0;
}

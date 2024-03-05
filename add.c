#include<stdio.h>
int main(){
    int a,b,sum,*x,*y;               //also applicable for -,*,/
    printf("enter two no.");
    scanf("%d%d",&a,&b);
    x=&a,y=&b;
    sum = *x + *y;
    printf("%d is sum",sum);
    return 0;
}
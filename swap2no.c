#include<stdio.h>
int main(){
    int a,b,temp,*x,*y;
    printf("Enter two no.");
    scanf("%d%d",&a,&b);
    x=&a;
    y=&b;
    temp = *x;
    *x = *y;
    *y = temp;
    printf("a=%d\n",*x);
    printf("b=%d\n",*y);
    
    return 0;
}
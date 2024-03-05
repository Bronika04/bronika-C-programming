#include<stdio.h>
void swap (int *x,int *y){
    int temp;
    temp =*x;
    *x =*y;
    *y = temp;
    return ;
}
int main(){
    int a,b;
    printf("Enter two no.");
    scanf("%d%d",&a,&b);   
    swap(&a,&b);  //call by refrence(by address)
    printf("a=%d\n",a);
    printf("b=%d",b);
    return 0;
}

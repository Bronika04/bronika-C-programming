#include<stdio.h>
int main(){
    double *p,a=5;                //initialise int char float in the same way
    p=&a;
    printf("Address of a: %u\n", &a);  //adress of variable
    printf("Address of a: %u\n",p);     // value of variable
   /*printf("Address of a: %p\n", &a);
    printf("Address of a: %p\n",p);*/

    printf("Value of a: %lf", *p);       //print the pointer
    return 0;
}

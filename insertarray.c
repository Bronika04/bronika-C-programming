#include<stdio.h>
int main(){
    int arr[10],n;
    int *ptr;
    printf("enter the size of array");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("enter the element");
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        ptr = &arr[i];
        printf("%d\n",*ptr);                     //print array using pointers
    }
    return 0;
}
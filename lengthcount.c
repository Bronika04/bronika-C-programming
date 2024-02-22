#include<stdio.h>
int main(){
    char str[50];
    printf("Enter the string");
    fgets(str,50,stdin);
    int count=0,i=0;
    while(str[i]!='\0'){
        count++;
        i++;
    }
    printf("%d",count);
    return 0;
}
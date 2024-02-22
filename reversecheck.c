#include<stdio.h>
#include<string.h>
int main(){
    char str1[50];
    char str2[50];
    printf("enter the string");
    fgets(str1,50,stdin);
    int temp, l=strlen(str1);
     for(int i=0,j=l-1;i<j;i++,j--){
         temp = str1[i];
         str1[i] = str1[j];
         str1[j] = temp;
            }

    str1[50]=str2[50];
    puts(str2);
    return 0;
}
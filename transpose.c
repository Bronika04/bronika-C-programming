#include<stdio.h>
int main(){
    int arr[5][5],r,c,i,j;
    printf("enter the rows and columns");
    scanf("%d %d",&r,&c);
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("enter the element");
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<c;i++){
        for(j=0;j<r;j++){
            printf("%d",arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}
#include<stdio.h>
int main(){
    int arr[5][5],brr[5][5],res[5][5],r,c,i,j;   //not working code have to check
    printf("Enter rows and columns");
    scanf("%d %d",&r,&c);
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("Enter the element in first array");
            scanf("%d ",&arr[i][j]);
        }
    }
    printf("\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("Enter the element in second array");
            scanf("%d ",&brr[i][j]);
        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            res[i][j]=arr[i][j]+brr[i][j];
        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d ",res[i][j]);
        }
        printf("\n");
    }
    return 0;
}
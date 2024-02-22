#include<stdio.h>
int main(){
    int arr[10][10],i,j,m,n,r,c,a,b,temp;
    printf("enter the rows and columns");
    scanf("%d %d",&r,&c);
    printf("enter the element");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            for(m=i;m<r;m++){
                for(n=j;n<c;n++){
                    if(arr[i][j]>arr[m][n]){
                        temp = arr[i][j];
                        arr[i][j] = arr[m][n];
                        arr[m][n] = temp;
                    }
                }
            }
        }
    }
    for(a=0;a<r;i++){
        for(b=0;b<c;j++){
            printf("%d",arr[a][b]);
        }
        printf("\n");
    }
    return 0;
}
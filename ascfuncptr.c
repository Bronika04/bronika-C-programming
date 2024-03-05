#include<stdio.h>
void sort (int n,int *ptr){          //asc func using pointers
    int temp;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(*(ptr+i)<*(ptr+j)){                 //same with desc order
                temp= *(ptr+i);
                *(ptr+i) = *(ptr+j);
                *(ptr+j) = temp;
            }
        }
    }
    for(int i=0;i<n;i++){                  //printing the result
        printf("%d  ",*(ptr+i));
    }
}
int main(){                      //START
    int arr[10],n;
    printf("enter the size of array");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("enter the element"); //enter element in array
        scanf("%d",&arr[i]);
    }
    sort(n,arr);       // calling func
    return 0;
}
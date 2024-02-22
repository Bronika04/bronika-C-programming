 #include<stdio.h>
void duplicate (int arr[]){
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if (arr[i] == arr[j]){
                printf("yes there is a duplicate element i.e,: %d",arr[i]);
            }
        }
    }
    return;
}
int main(){
    int arr[5] = {1,2,2,4,5};
    duplicate(arr);
    return 0;
}
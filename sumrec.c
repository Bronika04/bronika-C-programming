#include<stdio.h>
// int sumrec(int n){
//     static int  sum = 0;
//     if(n==0){
//         return sum;
//     }
//     else{
//         int rem = n%10;
//         int sum = sum+rem;
//         sumrec(n/10);
//     }
// }
// int main(){
//     int n;
//     printf("enter the no.");
//     scanf("%d",&n);
//     int x = sumrec(n);
//     printf("%d",x);
//         return 0;#include<stdio.h>
int  sumrec(int n){
  if (n!=0)
  {
        int rem = n%10;
      return( rem + sumrec (n/10));
    }
    else
    {
        return 0;
    }
    
}
int main(){
    int n;
    printf("enter the no.");
    scanf("%d",&n);
   int result= sumrec(n);
   printf("%d",result);
    return 0;
}
// }
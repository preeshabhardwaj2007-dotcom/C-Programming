// WAP to check the number is armstrong number or not
#include<stdio.h>
int main(){
   int n,rem,res=0;
   int count,n1;
   while(n!=0){
    rem = n%10;
    res = res+(pow(rem,count));
    n/=10;

   }
   if(res==n1){
    printf("%d",res);
   }
   else{
       printf("34");
   }
  return 0;
}
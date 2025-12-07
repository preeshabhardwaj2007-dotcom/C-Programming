// WAP to demonstrate continue and break statement
// in case of continue statement the control goes to the next iteration of the loop
// in case of break statement the control comes out of the loop
#include<stdio.h>
int main(){
  int n=10,i;
  for(i=0;i<=n;i++){
    if(i==5){
      continue;
      //break;
    }
    printf("%d\n",i);
  }
  return 0;
}
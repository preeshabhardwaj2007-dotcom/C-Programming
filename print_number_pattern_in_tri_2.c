// WAP to print number pattern :-
// 1
// 2 2
// 3 3 3
#include<stdio.h>
int main(){
  int a=1;
  system("cls");
  for(int i=0;i<=2;i++){
    for(int j=0;j<=i;j++){
      
      printf("%d",a);
      
      
    }
    a++;
  printf("\n");
  }
return 0;  
}
// WAP to print character pattern :-
// A  
// A B
// A B C
#include<stdio.h>
int main(){
  char a='A';
  system("cls");
  for(int i=0;i<=2;i++){
    for(int j=0;j<=i;j++){
      
      printf("%c",a);
     a++;
      
    }
  printf("\n");
  a='A';
  }
return 0;  
}
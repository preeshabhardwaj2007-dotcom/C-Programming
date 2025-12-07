#include<stdio.h>
int main(){
    // WAP to print characters in triangle pattern
  char a='A';
  system("cls");
  for(int i=0;i<=2;i++){
    for(int j=0;j<=i;j++){
      
      printf("%c",a);
      a++;
      
    }
  printf("\n");
  }
return 0;  
}
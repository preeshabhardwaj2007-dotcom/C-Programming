#include<stdio.h>
// WAP to print right triangle star pattern
//    *
//   **
//  ***
int main(){
  system("cls");
  for(int i=0;i<=2;i++){
    for(int j=0;j<=i;j++){
      
      printf(" ");
    }
     for(int k=0;k<=i;k++){
      printf("*");
     }
    
  printf("\n");
    }
return 0;  
}
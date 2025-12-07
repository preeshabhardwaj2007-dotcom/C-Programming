// for loop has 3 parameters :- 
//syntax :- for(initialization;condition;increment/decrement)
// WAP to print first 'n' natural number.

#include<stdio.h>
int main(){
  
  int n;
  int i=1; // initialization
  system("cls");
  printf("ENTER THE VALUE OF 'n' : ");
  scanf("%d",&n);
  for(;i<=n;i++){ // initialization i=1, condition i<=n, increment i++  
    // in for loop initialization can be  done  outside and incriment and dicriment operation can be done in body of for loop
   // instead of passing in parenthesis 
    printf("%d\n",i); 
  }
 sleep(10);
 printf("run the program again"); 
 return 0; 

}
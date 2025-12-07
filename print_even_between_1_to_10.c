// WAP TO PRINT EVEN NUMBERS BETWEEN 1 TO 10

#include<stdio.h>
int main(){
  int i;
  for(i=1;i<=10;i++){
    if(i%2!=0){
      continue;
    }
    printf("%d\n",i);
  }
  return 0;
}


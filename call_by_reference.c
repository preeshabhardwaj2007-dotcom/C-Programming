// this is call by reference
// WAP to demonstrate call by value and call by reference
// In call by reference the address of actual parameter is copied to formal parameter
// so any changes made to formal parameter affect actual parameter
// this is demonstrated in this program
// this is call by reference example
  #include<stdio.h>
  void swap(int *x,int *y){
    printf("Before swapping  x is %d and y is %d\n",*x,*y);
    int temp=*x;
    *x=*y;
    *y=temp;
    printf("After swapping  x is %d and y is %d\n",*x,*y);
  }
int main(){
  int a,b;
  printf("Enter two numbers : \n");
  scanf("%d%d",&a,&b);
  printf("Before calling swap function a is %d and b is %d\n",a,b);
  swap(&a,&b);
  printf("After calling swap function a is %d and b is %d\n",a,b);
return 0;
}
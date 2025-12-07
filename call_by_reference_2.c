// call by reference
// WAP to demonstrate call by reference
 // swap function to swap two numbers
 // using call by reference method
 // pointer variables are used to achieve call by reference
 #include<stdio.h>
void swap(int *x,int *y){
    printf("Before swapping  x is %d and y is %d\n",*x,*y);
    int temp=*x;
    *x=*y;
   *y=temp;
    printf("After swapping  x is %d and y is %d\n",*x,*y);
  }
int main(){
  system("cls");
  int a=5,b=7;
  
  printf("Before calling swap function a is %d and b is %d\n",a,b);
  swap(&a,&b);
  printf("After calling swap function a is %d and b is %d\n",a,b);
  printf("After Swapping, a is %d and b is %d\n",b,a);
return 0;
}
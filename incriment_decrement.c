#include<stdio.h>
//to demonstrate increment and decrement operators
int main() {
int x , y ;
int n = 10;
x = n++;//x 10, n=11 value is assigned first then incremented
y = ++n;//y=12, n=11 value is incremented first then assigned
printf( " x = %d, y = %d\n", x , y ) ;
return 0;
}
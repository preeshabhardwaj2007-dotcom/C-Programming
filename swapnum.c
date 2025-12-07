#include<stdio.h>
int main()
{
    // Swap two numbers using a temporary variable
    int a,b,temp;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    printf("Before swapping a=%d b=%d\n",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("After swapping a=%d b=%d\n",a,b);
   
    return 0;
}
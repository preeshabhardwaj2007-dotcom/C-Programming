#include<stdio.h>
int main()
{
    float num;
    int int_num;
    printf("Enter a floating-point number: ");
    scanf("%f", &num);
    int_num = (int)num; // Convert float to int by truncating the decimal part
    printf("The integer part is: %d\n", int_num);
    return 0;
}

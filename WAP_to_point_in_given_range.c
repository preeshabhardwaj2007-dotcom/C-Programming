//WAP to point 1 to 5 but the given range is 1 to 10

#include<stdio.h>
int main()
{
    int i = 1, n = 10;
    while(i != n)
    {
        printf("i=%d\n", i);
        if(i == 5)
            break;
        i++;
    }
return 0;
}

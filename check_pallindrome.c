// WAP to check the number is pallindrome 0r not?

#include <stdio.h>

int main()
{
    int num, reversed = 0, remainder, original;

    printf("Enter an integer: ");
    scanf("%d", &num);

    original = num;  // store the original number

    // reverse the number
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    // check palindrome
    if (original == reversed)
        printf("%d is a palindrome.\n", original);
    else
        printf("%d is not a palindrome.\n", original);

    return 0;
}

/*
#include<stdio.h>
int main(){
   int n,orig,rev=0;
   int count;
   while(n!=0){
    count++;
    int digit=n%10;
    rev=rev*10+digit;
   }
    if(orig==rev){
     printf("The number is pallindrome");
    }
    else{
     printf("The number is not pallindrome");
    }


  return 0;
}
*/
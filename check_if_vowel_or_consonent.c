#include<stdio.h>
// WAP to check whether a character is vowel or consonant
int main(){
    system("cls");
    char c;
    printf("Enter a character: ");
    scanf("%c",&c);
    if(c=='a'||c=='e'||c=='i'||c=="o"||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U'){
        printf("The character is a vowel");
    }
    else{
        printf("The character is a consonant");
    }
 return 0;    
}
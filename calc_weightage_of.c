#include<stdio.h>
int main(){
 float x,y,z;
    system("cls");
    printf("Enter marks of C Programming :");
    scanf("%f",&x);
    printf("Enter marks of Data Structure :");
    scanf("%f",&y);
    z= x*0.3 + y*0.7;
    printf("the result is : %f",z);

return 0;
}
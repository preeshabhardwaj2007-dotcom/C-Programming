#include<stdio.h>
int main(){
    system("cls");
    int l,b,a,s;
    int choice;
    printf(" Enter 1 to calculate Area of rectangle\n");
    printf("Enter 2 to calculate Area of square\n");
    scanf("%d",&choice);
    if(choice==1){
        printf("Enter the length of rectangle:");
        scanf("%d",&l);
        printf("Enter the breadth of rectangle:");
        scanf("%d",&b);
        a=l*b;
        printf("Area of Rectangle : %d",a);
}
    else if(choice==2){
        printf("Enter the side of square:");
        scanf("%d",&s);
        a=s*s;
        printf("Area of Square : %d",a);
    }
else{
        printf("Invalid choice");
    }

return 0;
}
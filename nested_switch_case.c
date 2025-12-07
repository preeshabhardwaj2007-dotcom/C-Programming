// WAP to demonstrate nested switch case
 
#include <stdio.h>

int main() {
    int mainChoice;  // Pretend user chose 1
    int subChoice;   // Pretend user chose 2
    printf("Enter 1st no. : \n");
    scanf("%d",&mainChoice);
    printf("Enter 2nd no. : \n"); 
    scanf("%d",&subChoice);
    switch (mainChoice) {
        case 1:
            switch (subChoice) {
                case 1:
                    printf("You chose %d \n",mainChoice);
                    break;
                case 2:
                    printf("You chose Option 1.2\n");
                    break;
                default:
                    printf("Invalid sub-option for main choice 1\n");
            }
            break;

        case 2:
            printf("Main choice 2 selected\n");
            break;

        default:
            printf("Invalid main choice\n");
    }

    return 0;
}

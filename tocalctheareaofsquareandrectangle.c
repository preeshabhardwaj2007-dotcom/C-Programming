#include <stdio.h>

int main() {
    int choice;
    float side, l, w, area;

    printf("Choose shape to calculate area:\n");
    printf("1. Square\n");
    printf("2. Rectangle\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter the l of the side of the square: ");
        scanf("%f", &side);
        area = side * side;
        printf("Area of the square: %.2f\n", area);
    } else if (choice == 2) {
        printf("Enter the l of the rectangle: ");
        scanf("%f", &l);
        printf("Enter the w of the rectangle: ");
        scanf("%f", &w);
        area = l * w;
        printf("Area of the rectangle: %.2f\n", area);
    } else {
        printf("option not available \n");
    }

    return 0;
}
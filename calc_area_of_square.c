// File: calc_area_of_square.c
#include <stdio.h>

int main() {
    float side,area;
    printf("Enter side of the square: ");
    scanf("%f", &side);
    area = side * side;
    printf("Area of the square: %f\n", area);
    
return 0;
}
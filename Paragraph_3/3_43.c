#include <stdio.h>

int main(void) {
    int side1 = 1;
    int side2 = 1;
    int side3 = 1;
    

    printf("%s", "Enter the lengths of the three sides of the triangle: ");
    scanf("%d %d %d", &side1, &side2, &side3);

    if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1) {
        printf("%s\n", "The lengths form a triangle.");
    } else {
        printf("%s\n", "The lengths do not form a triangle."); 
    }
}
#include <stdio.h>

int main(void) {
    int side1 = 1;
    int side2 = 1;
    int side3 = 1;
    int biggest_side = 0;

    printf("%s", "Enter the lengths of the three sides of the triangle: ");
    scanf("%d %d %d", &side1, &side2, &side3);

    if(side1 > side2 && side1 > side3){
        biggest_side = side1;
        if (biggest_side * biggest_side == side2 * side2 + side3 * side3) {
            printf("%s\n", "The lengths form a right triangle.");
            } else {
            printf("%s\n", "The lengths do not form a right triangle."); 
        }
    }
        if(side2 > side1 && side2 > side3){
            biggest_side = side2;
            if (biggest_side * biggest_side == side3 * side3 + side1 * side1) {
                printf("%s\n", "The lengths form a right triangle.");
                } else {
                printf("%s\n", "The lengths do not form a right triangle."); 
            }
        }
            if(side3 > side1 && side3 > side2){
            biggest_side = side3;
                if (biggest_side * biggest_side == side2 * side2 + side1 * side1) {
                    printf("%s\n", "The lengths form a right triangle.");
                    } else {
                    printf("%s\n", "The lengths do not form a right triangle."); 
                }
            }
}
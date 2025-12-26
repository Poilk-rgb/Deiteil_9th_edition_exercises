#include <stdio.h>

int main(void){

    double p = 3.14159;
    double radius = 0;
    double diameter = 0;
    double circumference = 0;
    double area = 0;

    printf("%s", "Enter the radius of a circle: ");
    scanf("%lf", &radius);
    diameter = 2 * radius;
    circumference = p * diameter; 
    area = p * radius * radius;
    printf("%s%.6lf\n", "diameter: ", diameter);
    printf("%s%.6lf\n", "circumference: ", circumference);
    printf("%s%.6lf\n", "area: ", area);
}
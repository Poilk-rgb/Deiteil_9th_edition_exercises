#include <stdio.h>
#include <math.h>

double hypotenuse(double, double);

int main(void){
    double side1 = 0;
    double side2 = 0;

    printf("%s", "Enter sides of triangle to calculate hipotenuse: ");
    scanf("%lf%lf", &side1, &side2);
    printf("hypotenuse: %lf", hypotenuse(side1, side2));
}

double hypotenuse(double side1, double side2){
    return sqrt(side1*side1 + side2 * side2);
}

#include <stdio.h>

int main(void){
    int two_sides_squares = 0;
    int hypotenuses_square = 0;
    int count = 0;
    for(int hypotenuse = 1; hypotenuse * hypotenuse <= 500; hypotenuse++){
        for(int side1 = 1; side1 * side1 <= 500; side1++){
            for(int side2 = 1; side2 * side2 <= 500; side2++){
                two_sides_squares = side1 * side1 + side2 * side2;
                hypotenuses_square = hypotenuse * hypotenuse;
                if(hypotenuses_square == two_sides_squares){
                    printf("Triple found: %d, %d, %d\n", side1, side2, hypotenuse);
                    count++;
                }
            }
        }
    }
    printf("%d", count);
}

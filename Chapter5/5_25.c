#include <stdio.h>

float smallest_number(float, float, float);

int main(void){
    float number1 = 13.4;
    float number2 = 13.4;
    float number3 = 12.4;
    printf("%f", smallest_number(number1, number2, number3));
}

float smallest_number(float number1, float number2, float number3){
    float smallest = number1;
    if(number1 > number2){
        smallest = number2;
    } else{
        if(number1 > number3){
        smallest = number3;
        }
    }
    return smallest;
}

#include <stdio.h>
#include <math.h>

int amount_of_digits(int);
int digits_reversed(int);

int main(void){
    int number = 7631;
    printf("%d", digits_reversed(number));
}

int amount_of_digits(int number){
    int count = 0;
    for(; number > 0; count++){
        number /= 10;
    }
    return count;
}

int digits_reversed(int number){
    int reversed_number = 0;
    int store = amount_of_digits(number);
    while(store > 0){
        reversed_number += (number % 10) * pow(10, --store);
        number /= 10;
    }
    return reversed_number;
}

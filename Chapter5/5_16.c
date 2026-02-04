#include <stdio.h>

int integerPower(int, int);

int main(void) {
   printf("The value is: %d", integerPower(3, 4));
}

int integerPower(int base, int exponent){
    int copy_base = base;
    for(int i = 1; i <= (exponent - 1); i++){
        base *= copy_base;
    }
    return base;
}

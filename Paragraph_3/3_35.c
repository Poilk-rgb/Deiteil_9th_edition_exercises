#include <stdio.h>

int main(void){
    int binary_integer = 0;
    int binary_count = 1;
    int one_digit = 0;
    int decimal_integer = 0;

    printf("%s", "Enter the up to 5 digit number get its decimal value: ");
    scanf("%d", &binary_integer);
    
        while( binary_integer > 0 ){
            one_digit = binary_integer % 10;
            one_digit *= binary_count;
            decimal_integer += one_digit;
            binary_integer /= 10;
            binary_count *= 2;
        }
            printf("%d", decimal_integer);
}
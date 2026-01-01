#include <stdio.h>

int main(void){
   double e = 1;
   double factorial = 1;
   int number = 2;
   int store = 0;
   int store2 = 0;

        while(number != 10000){

            e += (1 / factorial);
            store2 = number;
            factorial = 1;
            while(number > 1){
                store = number;
                number = number * (number-1);
                factorial *= number;
                number = store - 2;
            }
            number = store2 + 1;
        }
        printf("%.100lf", e);
}

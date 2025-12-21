#include <stdio.h>

    int main(void){
        int number = 3;
        int row_constant = 2;
        int column_constant = 3;



        int count = 0;
        while (count != 8) {
        printf("%s%d\t", "A+", count);// рядок 8-13 взагалі не пов'язані з основною програмою, просто виводять №1, №10 і тд
        count += 2;
        }
        printf("\n\n");



            while(number != 23){
                printf("%d\t", number);
                number += 2;
                //count++;
                    if(number == 9){
                        printf("%d\n", number);
                        number -= column_constant;
                    }
                    if(number == 12){
                        printf("%d\n", number);
                        number -= column_constant;
                    }
                    if(number == 15){
                        printf("%d\n", number);
                        number -= column_constant;
                    }
                    if(number == 18){
                        printf("%d\n", number);
                        number -= column_constant;
                    }
            }
    }


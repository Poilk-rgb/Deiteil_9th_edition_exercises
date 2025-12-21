#include <stdio.h>

    int main(void){
        int number = 1;
        int constant = 1;
        int count = 0;
        int count3 = 1;



        int count2 = 1;
        while (count2 != 10000) {
        printf("%d%s\t", count2, "*N");// рядок 8-13 взагалі не пов'язані з основною програмою, просто виводять №1, №10 і тд
        count2 *= 10;
        }
        printf("\n\n");

        while(count3 <= 10){
            while(count < 4){
                printf("%d\t", number);
                number *=10;
                count++;
            }
            printf("\n");
            count3++;
            number = count3;
            count = 0;
        }

            /*while(number != 10000){
                printf("%d\t", number);
                number *= 10;
                count++;
                    if(number == 1000){
                            if(count < 6){
                        printf("%d\n", number);
                        number = 2;
                            }
                    }
                    if(number == 2000){
                        printf("%d\n", number);
                        number = 3;
                    }
                    if(number == 3000){
                        printf("%d\n", number);
                        number = 4;
                    }
                    if(number == 4000){
                        printf("%d\n", number);
                        number = 5;
                    }
                    if(number == 5000){
                        printf("%d\n", number);
                        number = 6;
                    }
                    if(number == 6000){
                        printf("%d\n", number);
                        number = 7;
                    }
                    if(number == 7000){
                        printf("%d\n", number);
                        number = 8;
                    }
                    if(number == 8000){
                        printf("%d\n", number);
                        number = 9;
                    }
                    if(number == 9000){
                        printf("%d\n", number);
                        number = 10;
                    }
            }
    printf("%d\n", number);*/
    }

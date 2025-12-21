#include <stdio.h>

    int main(void){
        int counter = 1;
        int number = 0;
        int first_largest = 0;
        int second_largest = 0;


            while(counter != 11){
                printf("%s%d%s", "Enter ", counter, " number to get two the biggest numbers: ");
                scanf("%d", &number);
                if(number >= first_largest){
                    second_largest = first_largest;
                    first_largest = number;
                }
            counter++;
            }
        printf("%s%d %d", "The largest numbers is: " , first_largest, second_largest);
    }

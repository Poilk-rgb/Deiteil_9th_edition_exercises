#include <stdio.h>

    int main(void){
        int counter = 1;
        int number = 0;
        int largest = 0;

            while(counter != 11){
                printf("%s%d%s", "Enter the ", counter, "number to get the biggest: ");
                scanf("%d", &number);
                if(number > largest){
                    largest = number;
                }
            counter++;
            }
        printf("%s%d", "The largest number is: " , largest);
    }


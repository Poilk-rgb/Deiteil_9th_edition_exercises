#include <stdio.h>

int main(void){
    int number = 0;
    int factorial = 1;
    int store = 0;

    printf("%s", "Enter your non-negative number to get its factorial: ");
    scanf("%d", &number);

        while(number > -1){

            store = number;
            if (number == 1) {
                printf("%s%d", "the factorial of the number is: ", factorial);
            }
                if (number == 0){
                    printf("%s%d", "the factorial of the number is: ", factorial);
                }
            number = number * (number-1);
            factorial *= number;
            number = store-2;
        }
}

#include <stdio.h>

int main(void){
    int number = 0;
    int potential_seven = 0;
    int count = 0;

    printf("%s", "Enter the up to 5 digit number get how many 7s there are: ");
    scanf("%d", &number);

        while (number > 0) {
            potential_seven = number % 10;
                
                if (potential_seven == 7){
                count++;
                }
            number /= 10;
        }
    printf("%d", count);    
}
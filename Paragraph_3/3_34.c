#include <stdio.h>

int main(void){
    int palindrome = 0;
    int count = 0;
    int first_number = 0;
    int second_number = 0;
    int forth_number = 0;
    int fifth_number = 0;

    printf("%s", "Enter the 5 digit number to determine if it is palindrome or not: ");
    scanf("%d", &palindrome);
        fifth_number = palindrome % 10;
        palindrome /= 10;
        forth_number = palindrome % 10;
        palindrome /= 100;
        second_number = palindrome % 10;
        palindrome /= 10;
        first_number = palindrome % 10;
        palindrome /= 10;

        //printf("%d %d %d %d", first_number, second_number, forth_number, fifth_number);
        if (first_number == fifth_number){
            if (second_number == forth_number){
                printf("%s", "It is a palindrome");
            }
        }
        else {
            printf("%s", "It is not a palindrome");
        }
}

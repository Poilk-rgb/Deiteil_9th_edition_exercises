#include <stdio.h>

int isMultiple(int, int);

int main(){
    int first_integer = 0;
    int second_integer = 0;

    printf("%s", "Enter a pair of numbers to find out if 2nd is a multiple of 1st: ");
    while(scanf("%d %d", &first_integer, &second_integer) == 2){
        printf("Result of a function: %d\n", isMultiple(first_integer, second_integer));
        printf("%s", "Enter next pair: ");
    }
}

int isMultiple(int first_integer, int second_integer){
    if ((second_integer % first_integer) == 0){
        return 1;
    } else {
        return 0;
    }
}

#include <stdio.h>

int isEven(int);

int main(){
    int entered_integer = 0;

    printf("%s\n", "Enter number to determine if it is even(Enter letter to terminate): ");

    while(scanf("%d", &entered_integer) != 0){
        printf("%d\n", isEven(entered_integer));
    }
}

int isEven(int received_integer){
    if ((received_integer % 2) == 1){
        return 1;
    } else {
        return 0;
    }
}

#include <stdio.h>

void square_of_asterisk(int);

int main(void){
    int side = 10;
    square_of_asterisk(side);
}

void square_of_asterisk(int side){
    for(int i = 1; i <= side; i++){
        for(int i = 1; i <= side; i++){
            printf("%s", "*");
        }
        puts("");
    }
}

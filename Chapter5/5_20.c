#include <stdio.h>

void square_of_asterisk(int, char);

int main(void){
    char fillCharacter = '^';
    int side = 5;
    square_of_asterisk(side, fillCharacter);
}

void square_of_asterisk(int side, char fillCharacter){
    for(int i = 1; i <= side; i++){
        for(int i = 1; i <= side; i++){
            printf("%c", fillCharacter);
        }
        puts("");
    }
}

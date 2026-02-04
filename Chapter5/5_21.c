#include <stdio.h>

void square_of_characters(int, char);
void triangle_of_characters(int, char);
void circle_of_characters(int, char);
int type_of_shape(int);

int main(void){

    int shape = 0;

    printf("%s", "Enter what type of shape you want me to draw(0 - square, 1 - triangle, 2 - circle): ");
    scanf("%d", &shape);
    type_of_shape(shape);
}

int type_of_shape(int shape){
    int side = 11;//for a circle it's a diameter | for a triangle there will always be printed odd triangle despite u typing even :D
    char fillCharacter = '^';
        switch(shape){
        case 0:
            square_of_characters(side, fillCharacter);
            break;
        case 1:
            triangle_of_characters(side, fillCharacter);
            break;
        default:
            break;
        }
}

void square_of_characters(int side, char fillCharacter){
    for(int i = 1; i <= side; i++){
        for(int i = 1; i <= side; i++){
            printf("%c", fillCharacter);
        }
        puts("");
    }
}

void triangle_of_characters(int side, char fillCharacter){
    int amount_of_lines = (side/2)-1;
    int outer_space_count = 0;
    int middle_space_count = 1;
    for(int i = 1; i <= side / 2; i++){
            printf("%s", " ");
            outer_space_count++;
        }
        printf("%c", fillCharacter);
        puts("");

    for(int i = 1; i <= amount_of_lines; i++){
        outer_space_count--;
        for(int i = 1; i <= outer_space_count; i++){
            printf("%s", " ");
        }
        //outer_space_count--;
        printf("%c", fillCharacter);
        for(int i = 1; i <= middle_space_count; i++){
            printf("%s", " ");
        }
        middle_space_count += 2;
        printf("%c", fillCharacter);
        puts("");

    }
    for(int i = 1; i <= side; i++){
            printf("%c", fillCharacter);
        }
    if(side % 2 == 0){
        printf("%c", fillCharacter);
    }
}

/*void circle_of_characters(int side, char fillCharacter){

    for(int i = 1; i <= side; i++){
        for(int i = 1; i <= side; i++){
            printf("%c", fillCharacter);
        }
        puts("");
    }
}*/

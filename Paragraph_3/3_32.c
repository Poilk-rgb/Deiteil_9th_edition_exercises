 #include <stdio.h>

int main(void) {
    int row = 0;
    int column = 0;
    int square_size = 0;

    puts("Enter the size of the square");
    scanf("%d", &square_size);

    while (column < square_size){

        while (row < square_size) {
            printf("%s", "*");
            row++;
        }
        row = 0;
        column++;
        printf("\n");
    }
}


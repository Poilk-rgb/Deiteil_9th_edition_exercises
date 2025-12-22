 #include <stdio.h>

int main(void) {
    int row = 0;
    int column = 0;
    int square_size = 0;

    puts("Enter the size of the square");
    scanf("%d", &square_size);

    while (row < square_size) {
                printf("%s", "*");
                row++;
    }
    printf("\n");
    row=0;
        while (column < square_size-2) {
            printf("%s", "*");
            while (row < square_size-2){
                printf("%s", " ");
                row++;
            }
            printf("%s", "*");
            column++;
            printf("\n");
            row = 0;
        }
        row = 0;
    while (row < square_size) {
                printf("%s", "*");
                row++;
    }
}


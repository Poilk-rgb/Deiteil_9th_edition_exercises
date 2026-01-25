#include <stdio.h>

int main(void){
    int binary = 0;
    int remainder = 0;

    for(int i = 1; i <= 256; i++){
        printf("%d\t", i);
        binary = i;
        while(1){
            remainder = binary % 2;
            printf("%d", remainder); //i found out how to do it properly but not with the methods i met till this point in the book, so read it reverse for now
            binary /= 2;
            if (binary == 0){
                printf("\t");
                break;
            }

        }
        printf("%o\t", i);
        printf("%X\n", i);
    }
}

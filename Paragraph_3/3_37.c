#include <stdio.h>

int main(void){
    int count = 0;
    int point = 0;
    
    while (count < 100) {
        printf("%s", "*");
        count++;
        point = count % 10;
        if(point == 0){
            printf("\n");
        }
    }
}
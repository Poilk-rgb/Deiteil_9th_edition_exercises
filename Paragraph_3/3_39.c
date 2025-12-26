#include <stdio.h>

int main(void){
    int count = 8;
    int point = 0;
    int point2 = 0;
    
    while (count < 72) {
        printf("%s", "* ");
        count++;
        point = count % 8;
        point2 = count % 16;
        
        if(point == 0){
            printf("\n");
        }
        if(point2 == 0){
            printf(" ");
        }
    }
}
#include <stdio.h>

int main(void){
    int count = 0;
    int point = 0;
    
    while(count != 1000000000){
        count++;
        point = count % 100000000;
        if (point == 0){
            printf("%d\n", count);
        }
    }
}
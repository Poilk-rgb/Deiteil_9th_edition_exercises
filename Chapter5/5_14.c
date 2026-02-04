#include <stdio.h>
#include <stdlib.h>


int main(void){
    for(int i = 1; i <= 10; i++){
        int n = (1 + (rand() % 5)) * 2;
        printf("%d\n", n);
    }
    for(int i = 1; i <= 10; i++){
        int n = ((1 + (rand() % 5)) * 2) + 1;
        printf("%d\n", n);
    }
    for(int i = 1; i <= 10; i++){
        int n = (((1 + (rand() % 5)) * 2) + 1) * 2;
        printf("%d\n", n);
    }
}

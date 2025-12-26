#include <stdio.h> 

int main(void){
    int infinite = 2;
    while(infinite != 0){
        printf("%d\n", infinite);
        infinite *= 2; 
    }
}
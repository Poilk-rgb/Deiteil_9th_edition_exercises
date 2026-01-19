#include <stdio.h>

int main(void){ 

    int sum = 0;
    for(int variable = 2; variable <= 30; variable += 2){
        sum += variable;
    }
    printf("%d", sum);
}
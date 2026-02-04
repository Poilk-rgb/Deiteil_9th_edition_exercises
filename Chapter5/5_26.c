#include <stdio.h>

int isPerfect(int);

int main(void){
    int number = 0;
    int compare = 0;
    for(int i = 1; i <= 10000; i++){
        number = i;
        compare = isPerfect(number);
        if(compare != 0){
            printf("%d\n", compare);
        }
    }
}

int isPerfect(int number){
    int sum = 0;
    for(int i = 1; i <= number / 2; i++){
        if((number % i) == 0) {
            sum += i;
        }
        else{
            continue;
        }
    }
    if(sum != number){
        return 0;
    } else {
        printf("Perfect number is: %d\n", sum);
        return sum;
    }
}

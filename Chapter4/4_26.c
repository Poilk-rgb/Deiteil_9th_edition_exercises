#include <stdio.h>

int main(void){
    double pi = 0;
    double divider = 1;
    int count = 0;
    while(1){

        pi += (4 / divider) - (4 / (divider + 2));
        printf("%lf\t", pi);
        divider += 4;
        count++;
        printf("%d\n", count);
        if(divider > 650000){
            break;
        }
    }
}

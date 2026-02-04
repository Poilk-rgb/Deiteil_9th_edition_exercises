#include <stdio.h>
#include <math.h>

int main(void){

    double entered_number = 0;
    double round = 0;


    do{
        printf("%s", "Enter your number: ");
        scanf("%lf", &entered_number);
        round = floor(entered_number + .5);
        printf("%lf %lf\n", entered_number, round);
    } while(entered_number != 0);
}

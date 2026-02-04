#include <stdio.h>
#include <math.h>

double roundToInteger(double);
double roundToTenths(double);
double roundToHudreths(double);
double roundToThousandths(double);

int main(void){
    double entered_number = 0;

    do{
        printf("%s", "Enter your number: ");
        scanf("%lf", &entered_number);
        printf("%lf\t%lf\t%lf\t%lf\t%lf\n", entered_number, roundToInteger(entered_number), roundToTenths(entered_number), roundToHudreths(entered_number), roundToThousandths(entered_number));
    } while(entered_number != 0);
}

double roundToInteger(double received_number){
    return floor(received_number + .5);
}

double roundToTenths(double received_number){
    return floor(received_number * 10 + .5) / 10;
}

double roundToHudreths(double received_number){
    return floor(received_number* 100 + .5) / 100;
}

double roundToThousandths(double received_number){
    return floor(received_number * 1000 + .5) / 1000;
}

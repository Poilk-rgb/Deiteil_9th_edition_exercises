#include <stdio.h>

double toCelsius(double);
double toFahrenheit(double);

int main(void){
    double degree = 0;

    for(double i = 0; i <= 100; i++){
        degree = i;
        printf("%.1lf\t", toFahrenheit(degree));
    }
    puts("");

    for(double i = 32; i <= 212; i++){
        degree = i;
        printf("%.1lf\t", toCelsius(degree));
    }
}

double toCelsius(double degree){
    return ((degree - 32) * 5) / 9;
}

double toFahrenheit(double degree){
    return ((9 * degree) / 5) + 32;
}

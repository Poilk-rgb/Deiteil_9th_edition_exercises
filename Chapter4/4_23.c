
#include <stdio.h>
#include <math.h>

int main(void) {
    int principal = 100000;
    double rate = 0.05;
    int amount = 0;
    int grn = 0;
    int copiyka = 0;

    printf("%4s%21s\n", "Year", "Amount on deposit");
    for (int year = 1; year <= 10; ++year) {
        amount = principal * pow(1.0 + rate, year);
        grn = amount / 100;
        copiyka = amount % 100;
        printf("%3d%15d,%d\n", year, grn, copiyka);
    }
}

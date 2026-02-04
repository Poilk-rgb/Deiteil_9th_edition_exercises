#include <stdio.h>

double calculateCharges(double);

int main(void){

    double hour1 = 0;
    double hour2 = 0;
    double hour3 = 0;

    printf("%s", "Enter hours for three customers: ");
    scanf("%lf", &hour1);
    scanf("%lf", &hour2);
    scanf("%lf", &hour3);

    printf("%s\t%s\t%s\t\n", "Car", "Hours", "Charge");

    printf("%d\t%.2lf\t%.2lf\n", 1, hour1, calculateCharges(hour1));
    printf("%d\t%.2lf\t%.2lf\n", 2, hour2, calculateCharges(hour2));
    printf("%d\t%.2lf\t%.2lf\n", 3, hour3, calculateCharges(hour3));

    printf("%s\t%.2lf\t%.2lf\n", "TOTAL", hour1+hour2+hour3, calculateCharges(hour1)+calculateCharges(hour2)+calculateCharges(hour3));
}
    double calculateCharges(double hours){
        if(hours <= 3.00){
            return 3.00;
        }
        else {
            if(24.00 == hours){
                return 10.00;
            }
            else {
                if(hours > 3.00 && 24 > hours){
                    return 0.5 * (hours - 3) + 2;
                }
                else{
                    return 0;
                }
            }
        }
    }


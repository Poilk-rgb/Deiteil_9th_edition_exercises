#include <stdio.h>

    int main(void) {
        float hours = 0;
        float rate = 0;
        float salary = 0;
        float overhours = 0;

        while (hours != -1) {
            printf("%s\n", "Enter # of hours worked (-1 to end): ");
            scanf("%f", &hours);
            if (hours != -1) {
                printf("%s\n", "Enter hourly rate of the worker ($00.00): ");
                scanf("%f", &rate);
                if (hours <= 40){
                    salary = hours * rate;
                    printf("%s%.2f\n", "Salary is: $", salary);
                }
                    if (hours > 40){
                    overhours = hours - 40;
                    salary = 40 * rate + overhours * (rate * 1.5);
                    printf("%s%.2f\n", "Salary is: $", salary);
                }
            }
        }
    }


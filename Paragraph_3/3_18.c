#include <stdio.h>

    int main(void) {
        int account_number = 0;
        float sales = 0;
        float salary = 0;
        float nine_percentage = 0.09;
        float constant_payment = 200.00;

        while (sales != -1) {
            printf("%s\n", "Enter sales in dollars (-1 to end): ");
            scanf("%f", &sales);
            if (sales != -1) {
                salary = constant_payment + nine_percentage * sales;
                printf("%s%.2f\n", "Salary is: ", salary);
            }
        }
    }

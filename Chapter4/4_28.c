#include <stdio.h>

int main(void){
    int hours = 0;
    double rate = 0;
    double salary = 0;
    int overhours = 0;
    int paycode = 0;

    int total_unit_sold = 0;
    double units_price = 0;

    int items_produced = 0;
    double items_price = 0;

    printf("%s", "Enter the paycode of an employee: (-1 to stop)");
    while(scanf("%d", &paycode) == 1 && paycode != -1){
        switch (paycode){
        case 1:
            printf("%s\n", "Enter the number of hours worked by hourly worker: ");
            scanf("%d", &hours);
            printf("%s\n", "Enter hourly rate of the worker ($00.00): ");
            scanf("%lf", &rate);
                if (hours <= 40){
                    salary = hours * rate;
                    printf("%s%.2lf\n", "Salary is: $", salary);
                }
                    if (hours > 40){
                    overhours = hours - 40;
                    salary = 40 * rate + overhours * (rate * 1.5);
                    printf("%s%.2lf\n", "Salary is: $", salary);
                }
            break;
        case 2:
            printf("%s\n", "Enter how many units was sold by comission-worker: ");
            scanf("%d", &total_unit_sold);
            printf("%s\n", "Enter price per unit: ");
            scanf("%lf", &units_price);
            salary = 250 + 0.057 * total_unit_sold * units_price;
            printf("%s%.2lf\n", "Salary is: $", salary);
            break;

        case 3:
            printf("%s\n", "Enter how many items was made by a piece-worker: ");
            scanf("%d", &items_produced);
            printf("%s\n", "Enter price per item: ");
            scanf("%lf", &items_price);
            salary = items_price * items_produced;
            printf("%s%.2lf\n", "Salary is: $", salary);
            break;

        case 4:
            printf("%s\n", "Enter week salary manager employee: ");
            scanf("%d", &salary);
            printf("%s%.2lf\n", "Salary is: $", salary);
            break;

        default:
        printf("Invalid employee paycode. Please enter 1-4.\n");
            break;
        }
        printf("%s", "Enter the paycode of an employee: (-1 to stop)");
    }
}

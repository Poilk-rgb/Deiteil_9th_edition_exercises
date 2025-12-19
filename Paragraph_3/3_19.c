#include <stdio.h>

    int main(void) {
        float principal = 0;
        float interest = 0;
        float days = 0;
        float rate = 0;

        while (principal != -1) {
            printf("%s\n", "Enter loan principal (-1 to end): ");
            scanf("%f", &principal);
            if (principal != -1) {
                printf("%s\n", "Enter interest rate: ");
                scanf("%f", &rate);
                printf("%s\n", "Enter term of the loan in days: ");
                scanf("%f", &days);
                interest = principal * rate * days / 365;
                printf("%s%.2f\n", "The interest charge is: ", interest);
            }
        }
    }

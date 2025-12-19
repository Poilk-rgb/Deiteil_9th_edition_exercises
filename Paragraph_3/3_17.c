#include < stdio.h >

    int main(void) {
        int account_number = 0;
        float beginning_balance = 0;
        float total_charged = 0;
        float total_credits = 0;
        float credit_limit = 0;
        float new_balance = 0;

        while (account_number != -1) {
            printf("%s\n", "Enter account number (-1 to end): ");
            scanf("%d", & account_number);
            if (account_number != -1) {
                printf("%s\n", "Enter beginning balance: ");
                scanf("%f", & beginning_balance);
                printf("%s\n", "Enter total charges: ");
                scanf("%f", & total_charged);
                printf("%s\n", "Enter total credits: ");
                scanf("%f", & total_credits);
                printf("%s\n", "Enter credit limit: ");
                scanf("%f", & credit_limit);

                printf("%s%d\n", "Account: ", account_number);
                printf("%s%.2f\n", "Credit limit: ", credit_limit);
                new_balance = beginning_balance + total_charged - total_credits;
                printf("%s%.2f\n", "Balance: ", new_balance);
                if (new_balance > credit_limit) {
                    printf("%s\n", "Credit Limit Exceeded. ");
                }
            }
        }
    }

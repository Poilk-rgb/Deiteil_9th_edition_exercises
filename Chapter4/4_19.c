#include <stdio.h>

int main(void){
    double total_retail_value = 0;
    int product_number = 0;
    double quantity_sold = 0;
    while(scanf("%d", &product_number) != EOF){
        switch (product_number){
        case 1:
        scanf("%lf", &quantity_sold);
            total_retail_value += (quantity_sold * 2.98);
            break;
        case 2:
        scanf("%lf", &quantity_sold);
            total_retail_value += quantity_sold * 4.50;
            break;
        case 3:
        scanf("%lf", &quantity_sold);
            total_retail_value += quantity_sold * 9.98;
            break;
        case 4:
        scanf("%lf", &quantity_sold);
            total_retail_value += quantity_sold * 4.49;
            break;
        case 5:
        scanf("%lf", &quantity_sold);
            total_retail_value += quantity_sold * 6.87;
            break;
        
        default:
        printf("Invalid product number. Please enter 1-5.\n");
            break;
        }
    }
    printf("%.4lf", total_retail_value);
}
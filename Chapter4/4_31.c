#include <stdio.h>

int main(void){
    int row_amount = 1;
    int star_amount = 1;
    int space_amount = 4;
    int store_star_amount = star_amount;
    int store_space_amount = space_amount;

        for(; row_amount <= 5; row_amount++){
            for(; space_amount >= 1; space_amount--){
                printf("%s", " ");
            }
            space_amount = --store_space_amount;
            for(; star_amount >= 1; star_amount--){
                printf("%s", "*");
            }
            store_star_amount += 2;
            star_amount = store_star_amount;
                puts("");
        }

        row_amount = 2;
        space_amount = 1;
        star_amount = 7;
        store_star_amount = star_amount;
        store_space_amount = space_amount;

        for(; row_amount <= 5; row_amount++){
            for(; space_amount >= 1; space_amount--){
                printf("%s", " ");
            }
            space_amount = ++store_space_amount;
            for(; star_amount >= 1; star_amount--){
                printf("%s", "*");
            }
            store_star_amount -= 2;
            star_amount = store_star_amount;
                puts("");
        }
}

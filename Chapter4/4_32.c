#include <stdio.h>

int main(void){
    int row_amount = 1;
    int star_amount = 1;
    int store_star_amount = star_amount;

    printf("%s", "Enter amount of row in your diamond: ");
    scanf("%d", &row_amount);
    row_amount = (row_amount/2) + 1;// getting number of rows, split to make first half
    int space_amount = row_amount - 1;
    int store_space_amount = space_amount;

        for(int row_counter = 1; row_counter <= row_amount; row_counter++){// making the first half of the diamond
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

        space_amount = 1;
        store_space_amount = 1;
        star_amount -= 4;
        store_star_amount -= 4;


        for(int row_counter = 1; row_counter != row_amount; row_counter++){// second half of the diamond
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

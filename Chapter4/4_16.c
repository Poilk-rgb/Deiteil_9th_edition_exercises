#include <stdio.h>

int main(void){ 

    for(int iteration_amount = 1; iteration_amount <= 10; iteration_amount++){
        for (int asterisk_amount = 1; asterisk_amount <= iteration_amount; asterisk_amount++){
            printf("%s", "*");
        }
        puts("");
    }

    int asterisk_amount = 10;
    for(int iteration_amount = 1; iteration_amount <= 10; iteration_amount++){
        for (; asterisk_amount >= 1; asterisk_amount--){
            printf("%s", "*");
        }
        asterisk_amount = 10;
        asterisk_amount -= iteration_amount;
        puts("");
    }
    
    for(int iteration_amount = 1; iteration_amount <= 10; iteration_amount++){
        for (asterisk_amount = 10; asterisk_amount >= iteration_amount; asterisk_amount--){
            printf("%s", "*"); 
        }
        puts("");
        if(iteration_amount != 10){
            for (int space_amount = 1; space_amount <= iteration_amount; space_amount++){
                printf("%s", " ");
            }
        }
    }
    for(int iteration_amount = 1; iteration_amount <= 10; iteration_amount++){
        for (int space_amount = 9; space_amount >= iteration_amount; space_amount--){
            printf("%s", " ");
        }
        for (asterisk_amount = 1; asterisk_amount <= iteration_amount; asterisk_amount++){
            printf("%s", "*"); 
        }
        puts("");
        
    }
}
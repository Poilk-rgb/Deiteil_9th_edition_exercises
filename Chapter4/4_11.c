#include <stdio.h>

int main(void){
    int read_value = 0;
    int smallest = 0;
        scanf("%d", &read_value);
        int count = read_value;
            for (int i = 1; i <= count; i++){
                scanf("%d", &read_value);
                if (i == 1){
                    smallest = read_value;
                }
                    if (smallest >= read_value) {
                        smallest = read_value; 
                    } 
            }
    printf("%d", smallest);
}
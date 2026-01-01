#include <stdio.h>

int main(void){
   double e = 1;
   double factorial = 1;
   int number = 1;
   int store1 = 0;
   int store2 = 0;
   int store3 = 0;
   int x = 2;
   store1 = x;
   
        while(number != 20){
            
            e += x / factorial; //3 5 7 8.33 9 9.266666
            x = store1;
            store2 = number;
                while(store2 > 1){
                    x = x * store1;// 4 8 16 32
                    store2--;
                }
            
            store2 = number;
            factorial = 1;
            
                while(number > 1){
                    store3 = number;
                    number = number * (number-1);//2 6 24 120
                    factorial *= number;
                    number = store3 - 2;
                }
            
            number = store2 + 1;//2 3 4 5 6
        }
    
        e -= store1;
        printf("%.10lf", e);
}


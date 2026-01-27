#include <stdio.h>

int main(void){
	int aCount = 0;
	int bCount = 0;
	int cCount = 0;
	int dCount = 0;
	int fCount = 0;

	puts("Enter the letter grades.");
	puts("Enter the EOF character to end input.");
	int grade = 0;

	while ((grade = getchar()) != EOF) {

        if(grade == 'A' || grade == 'a'){
            ++aCount;
            continue;
        }
        else {
            if(grade == 'B' || grade == 'b'){
            ++bCount;
            continue;
            }
            else{
                if(grade == 'C' || grade == 'c'){
                ++cCount;
                continue;
                }
                else {
                    if(grade == 'D' || grade == 'd'){
                        ++dCount;
                        continue;
                    }
                    else {
                        if(grade == 'F' || grade == 'f'){
                            ++fCount;
                            continue;
                        }
                        else {
                            if(grade > 102 || grade == 101 || grade == 69){
                                printf("%s", "Incorrect letter grade entered.");
                                puts(" Enter a new grade.");
                                continue;
                            }
                            else {
                                if(grade > 70 && grade < 97){
                                    printf("%s", "Incorrect letter grade entered.");
                                    puts(" Enter a new grade.");
                                    continue;
                                }
                                else {
                                    if(grade == 32 || grade == 9 ||grade == 10){
                                        continue;
                                    }
                                    else {
                                        printf("%s", "Incorrect letter grade entered.");
                                        puts(" Enter a new grade.");
                                        continue;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

	puts("\nTotals for each letter grade are:");
	printf("A: %d\n", aCount);
	printf("B: %d\n", bCount);
	printf("C: %d\n", cCount);
	printf("D: %d\n", dCount);
	printf("F: %d\n", fCount);
}

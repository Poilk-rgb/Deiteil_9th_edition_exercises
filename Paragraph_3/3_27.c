 // fig03_06.c
// Analysis of examination results.
#include <stdio.h>

// function main begins program execution
int main(void) {
// initialize variables in definitions
    int passes = 0;
    int failures = 0;
    int student = 1;

// process 10 students using counter-controlled loop
    while (student <= 10) {
        // prompt user for input and obtain value from user
        printf("%s", "Enter result (1=pass,2=fail): ");
        int result = 0; // one exam result
        scanf("%d", &result);

        // if result 1, increment passes

        if (result == 1) {
         passes = passes + 1;
         student = student + 1; // increment student counter
        } // if result 2, increment failures
        if (result == 2){
         failures = failures + 1;
         student = student + 1; // increment student counter
        }
        if (result > 2){// here i specified for user conditions to not enter anything else except 1 and 2
         printf("%s", "Incorect value, enter result (1=pass,2=fail): ");
        }
        if (result < 1){
         printf("%s", "Incorect value, enter result (1=pass,2=fail): ");
        }
   } // end while

    // termination phase; display number of passes and failures
    printf("Passed %d\n", passes);
    printf("Failed %d\n", failures);

// if more than eight students passed, print "Bonus to instructor!"
   if (passes > 8) {
      puts("Bonus to instructor!");
   } // end if
} // end function main

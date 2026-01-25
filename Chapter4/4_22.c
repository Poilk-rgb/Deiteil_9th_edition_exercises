#include <stdio.h>

 int main(void) {
   int aCount = 0;
   int bCount = 0; 
   int cCount = 0; 
   int dCount = 0; 
   int fCount = 0; 
   int avarage_grade = 0;

   puts("Enter the letter grades.");
   puts("Enter the EOF character to end input.");
   int grade = 0; 


   while ((grade = getchar()) != EOF) {

     
      switch (grade) { 
         case 'A': 
         case 'a': 
            ++aCount; 
            break; 
         case 'B': 
         case 'b': 
            ++bCount;  
            break; 
         case 'C': 
         case 'c': 
            ++cCount; 
            break;
 
         case 'D': 
         case 'd': 
            ++dCount; 
            break;
         case 'F': 
         case 'f': 
            ++fCount; 
            break; 
         case '\n': 
         case '\t': 
         case ' ': 
            break; 
         default: 
            printf("%s", "Incorrect letter grade entered."); 
            puts(" Enter a new grade."); 
            break; 
      } 
   } 
   int all_counts = aCount + bCount + cCount + dCount + fCount;
   avarage_grade = (aCount * 97 + bCount * 98 + cCount * 99 + dCount * 100 + fCount * 101) / all_counts;
   char converted_avarage_grade = avarage_grade;
   if(converted_avarage_grade == 101){
        printf("%s", "The average for class is f");
   } else {
        printf("%s%c", "The average for class is ", converted_avarage_grade);
   }

   puts("\nTotals for each letter grade are:");
   printf("A: %d\n", aCount);
   printf("B: %d\n", bCount); 
   printf("C: %d\n", cCount); 
   printf("D: %d\n", dCount); 
   printf("F: %d\n", fCount); 
}
#include <stdio.h>
int main() {
   int score;
   printf("Please enter your score: ");
   scanf("%d", &score);
   if (score >= 50){
    printf("Congratulations! You passed\n");
    if 
    (score >= 80) {
        printf("Level: Excellent\n");
    }
     else if 
     (score >= 50) {
        printf("Level: Good\n");
    } 
    else if (score <= 30) {
        printf("Sorry: Failed 1\n");
    }
   } 
   else if 
    (score >= 20) {
       printf("Sorry: Failed 2\n");
   }
   return 0;
}
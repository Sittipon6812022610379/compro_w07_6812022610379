#include <stdio.h>

int main() {
    int score = 50;
    if (score > 80) {
        printf("Grade A\n");
    } else if (score > 70) {
        printf("Grade B\n");
    } else if (score > 60) {
        printf("Grade C\n");
    } else {
        printf("Grade F\n");
    }
    return 0;
}

#include <stdio.h>

int main() {
    float score;
    printf("Enter your midterm score: ");
    scanf("%f", &score);

    if (score >= 50) {
        float bonus = score * 0.5;
        score += bonus;
    }

    printf("Final score: %.2f\n", score);
    printf("End of evaluation\n");
    return 0;
}
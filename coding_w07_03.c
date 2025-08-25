#include <stdio.h> // Code เดิมจากโจทย์

int main() {
    int level;
    printf("Enter level (1-4): ");
    scanf("%d", &level);

    switch (level) {
        case 1: printf("Beginner\n"); break;
        case 2: printf("Intermediate\n"); break;
        case 3: printf("Advanced\n"); break;
        case 4: printf("Expert\n"); break;
        default: printf("Invalid level\n");
    }

    return 0;
}
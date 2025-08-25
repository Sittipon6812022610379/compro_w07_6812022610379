#include <stdio.h>

int main() {
    int level;

    printf("Enter your membership level (1-4): ");
    scanf("%d", &level);

    switch (level) {
        case 1:
            printf("Silver → 5%% discount\n");
            break;
        case 2:
            printf("Gold → 10%% discount + Reward points\n");
            break;
        case 3:
            printf("Platinum → 15%% discount + Reward points + Birthday gift\n");
            break;
        case 4:
            printf("Diamond → ได้ทุกอย่าง + VIP events\n");
            break;
        default:
            printf("Invalid membership level\n");
    }

    return 0;
}
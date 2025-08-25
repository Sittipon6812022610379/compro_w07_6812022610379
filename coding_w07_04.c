#include <stdio.h>

int main() {
    int level;

    printf("Enter your membership level (1-4): ");
    scanf("%d", &level);

    if (level == 1) {
        printf("Silver → 5%% discount\n");
    } else if (level == 2) {
        printf("Gold → 10%% discount + Reward points\n");
    } else if (level == 3) {
        printf("Platinum → 15%% discount + Reward points + Birthday gift\n");
    } else if (level == 4) {
        printf("Diamond → ทุกอย่าง + VIP events\n");
    } else {
        printf("Invalid membership level\n");
    }

    return 0;
}
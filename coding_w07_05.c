#include <stdio.h>

int main() {
    int age, vipLevel;
    float purchaseAmount;
    float discount = 0;

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter VIP level (1-5): ");
    scanf("%d", &vipLevel);

    printf("Enter purchase amount: ");
    scanf("%f", &purchaseAmount);

    if (age > 60 || vipLevel == 3 || vipLevel == 4) {
        discount = 20.0;
    }
    else if (age >= 30 && age <= 40 && purchaseAmount > 2000) {
        discount = 15.0;
    }
    else if (age >= 18 && age <= 25 && purchaseAmount > 1000) {
        discount = 10.0;
    }
    else if (vipLevel == 5 || purchaseAmount > 50000) {
        discount = 25.0;
    }
    else {
        discount = 0;
    }

    printf("\n--- Customer Info ---\n");
    printf("Age: %d | VIP Level: %d | Amount: %.2f THB\n", age, vipLevel, purchaseAmount);

    if (discount > 0) {
        printf("Discount received: %.0f%%\n", discount);
    } else {
        printf("No discount applied\n");
    }

    printf("\nThank you for shopping with us!\n");

    return 0;
}

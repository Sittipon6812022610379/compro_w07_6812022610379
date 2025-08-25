#include <stdio.h>

int main() {
    float x, y;
    printf("Enter value for x: "); // รับค่าตัวเลขแรก เก็บในตัวแปร x
    scanf("%f", &x);
    printf("Enter value for y: "); // รับค่าตัวเลขที่สอง เก็บในตัวแปร y
    scanf("%f", &y);

    // เปรียบเทียบค่า x กับ y
    if (x > y) {
        printf("x is greater than y\n"); // ถ้า x มากกว่า y ให้แสดงข้อความนี้
    } else if (x < y) {
        printf("x is less than y\n"); // ถ้า x น้อยกว่า y ให้แสดงข้อความนี้
    } else {
        printf("x is equal to y\n"); // ถ้า x เท่ากับ y ให้แสดงข้อความนี้
    }
    return 0;
}
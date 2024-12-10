#include <stdio.h>

int main() 
{
    int a, b, tong, hieu, tich, thuong;
    printf("Nhap vao so nguyen a: ");
    scanf("%d", &a);
    printf("\n");
    printf("Nhap vao so nguyen b: ");
    scanf("%d", &b);
    tong = a + b;
    hieu = a - b;
    tich = a * b;
    thuong = a / b;
    printf("\n");
    printf("Tổng là: %d + %d = %d\n", a, b, a + b); 
    printf("\n");
    printf("Hiệu là: %d - %d = %d\n", a, b, a - b);
    printf("\n");
    printf("Tích là: %d * %d = %d\n", a, b, a * b);
    printf("\n");
    if (b != 0) {
        printf("Thương là: %d / %d = %d\n", a, b, a / b);
    } 
        else {
            printf("Thương: Không thể chia cho 0!\n");
    return 0;
        }
}
#include <stdio.h>

int main() {
    
    int canhhinhvuong, chuvi, dientich;
    
    printf("Nhap do dai canh hinh vuong: ");
    scanf("%d", &canhhinhvuong);
    printf("\n");
    
    chuvi = canhhinhvuong * 4;
    dientich = canhhinhvuong * canhhinhvuong;
    
    printf("Chu vi hinh vuong la: %d\n", chuvi);
    printf("\n");
    printf("Dien tich hinh vuong la: %d\n", dientich);
    
    return 0;
}
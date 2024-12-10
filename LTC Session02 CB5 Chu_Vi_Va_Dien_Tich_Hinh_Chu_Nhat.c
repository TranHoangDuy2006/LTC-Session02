#include <stdio.h>

int main() {
    
    int chieudai, chieurong, chuvi, dientich;
while (1)   
{
    printf("\n");
    printf("Nhap chieu rong hinh chu nhat: ");
    scanf("%d", &chieurong);
    printf("\n");
    printf("Nhap chieu dai hinh chu nhat: ");
    scanf("%d", &chieudai);
    printf("\n");
    
    if (chieudai > chieurong) 
    {
        chuvi = ( chieudai + chieurong ) * 2;
        
        dientich = chieudai * chieurong;
        
        printf("Chu vi hinh chu nhat la: %d\n", chuvi);
        
        printf("\n");
        
        printf("Dien tich hinh chu nhat la: %d\n", dientich);
        
        break;
    }
      else 
      {
        printf("Chieu rong va chieu dai khong thoa man, vui long nhap lai!");
        printf("\n");
      }
}
      
    return 0;
}
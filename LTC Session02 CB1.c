#include <stdio.h>
#include <stdbool.h>

int main() {
    // Kieu du lieu int: Dung de luu tru cac so nguyen 
    int tuoi = 18; // Khoi tao bien age voi gia tri la 18

    // Kieu du lieu float: Dung de luu tru cac so thuc 
    float pi = 3.14; // Khoi tao bien pi voi gia tri la 3.14

    // Kieu du lieu double: Tuong tu kieu du lieu float nhung co do chinh xac cao hon
    double trongluc = 9.81; // Khoi tao bien trongluc voi gia tri la 9.81

    // Kieu du lieu char: Dung de luu tru mot ki tu bat ki
    char chu = 'A'; // Khoi tao bien chu voi gia tri la 'A'

    // Kieu du lieu bool: Luu tru gia tri dung / sai (true/false)
    bool hocsinh = true; // Khoi tao bien hocsinh voi gia tri la true

    // Kieu du lieu unsigned int: Dung de luu tru cac so nguyen khong am
    unsigned int khoangcach = 50; // Khoi tao bien khoangcach voi gia tri la 50

    // Kieu du lieu short: Dung de luu tru cac so nguyen nho hon
    short nhietdo = -15; // Khoi tao bien nhiet do voi gia tri la -15

    // Kieu du lieu long: Dung de luu tru cac so nguyen lon hon 
    long dansothegioi = 800000000; // Khoi tao bien dansothegioi voi gia tri la 8 ti

    // Kieu du lieu long long: Dung de luu tru cac so nguyen rat lon
    long long randomBigNum = 919821873173764; // Khoi tao bien randomBigNum voi mot gia tri rat lon la 919821873173764

    // Cuoi cung in ra cac gia tri cua cac kieu du lieu:
    printf("Tuoi: %d tuoi \n", tuoi);
    
	printf("Pi: %.2f\n", pi);
    
	printf("Trong Luc: %.2lf\n", trongluc);
    
	printf("Chu: %c\n", chu);
    
	printf("Hoc Sinh: %d\n", hocsinh);
    
	printf("Khoang Cach: %u\n", khoangcach);
    
	printf("Nhiet Do: %d Do C\n", nhietdo);
    
	printf("Dan So The Gioi: %ld Nguoi\n", dansothegioi);
   
    printf("Mot So Rat Lon: %lld\n", randomBigNum);

    return 0;
}


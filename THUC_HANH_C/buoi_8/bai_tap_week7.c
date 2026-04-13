#include<stdio.h>
int main()
{
    int n, i, giai_thua;
    //bai tap 6: Tinh n!
    printf("Bai tap 6: Tinh n! \n");
    printf("nhap n: ");
    scanf("%d", &n);
    if(n < 0) {
        printf("n phai la so nguyen duong!\n");
    } else if(n == 0) {
        printf("0! = 1\n");
    } else if(n >= 8) {
        printf("Chi tinh giai thua toi da nho hon 8.\n");
    } else {
        giai_thua = 1;
        for(i = 1; i <= n; i++) {
            giai_thua *= i;
        }
        printf("%d! = %d\n", n, giai_thua);
    }
    printf("\n");
    //bai tap 8: tinh tong so nguyen duong hoac so nguyen am
    printf("Bai tap 8: Tinh tong so nguyen duong hoac ngyen am");
    int truong_hop, tong = 0;

    // Giao dien lua chon
    printf("\n--- CHUONG TRINH TINH TONG ---\n");
    printf("TH1. Tinh tong cac so LE tu 1 den n\n");
    printf("TH2. Tinh tong cac so CHAN tu 1 den n\n");
    printf("Lua chon cua ban (1 hoac 2): ");
    scanf("%d", &truong_hop);
    printf("Nhap so nguyen n: ");
    scanf("%d", &n);

    if (truong_hop == 1) {
        // Truong hop tinh tong so le
        for ( i = 1; i <= n; i++) {
            if (i % 2 == 1) {
                tong += i;
            }
        }
        printf("\nTong cac so LE tu 1 den %d la: %d\n", n, tong);
    } 
    else if (truong_hop == 2) {
        // Truong hop tinh tong so chan
        for (i = 1; i <= n; i++) {
            if (i % 2 == 0) {
                tong += i;
            }
        }
        printf("\nTong cac so CHAN tu 1 den %d la: %d\n", n, tong);
    } 
    else {
        printf("\nLua chon TH khong hop le!\n");    
    }
    printf("\n");

    //bai tap 9: tinh tong S = 1 + 1/2 + ... + 1/n
    float s = 0; 
    printf("Bai tap 9: tinh tong S = 1 + 1/2 + ... + 1/n\n");
    printf("nhap so nguyen n:");
    scanf("%d", &n);
    if(n<=0){
        printf("nhap n la so nguyen duong!\n");
        return 1;
    }
    else {
        for(i = 1; i <= n; i++) {
            s+=1.0/ i;
        }
        printf("Tong S = 1 + 1/2 + ... + 1/%d la: %.4f\n", n, s);
    }
    printf("\n");
    
    //bai tap 10: xac dinh so nguyen phai la so nguyen to khong
 
    printf("Bai tap 10: xac dinh so nguyen to\n");
    printf("nhap so nguyen n: ");
    scanf("%d", &n);
    if(n < 2) {
        printf("%d khong phai la so nguyen to!\n", n);
    } else {
        int so_nguyen_to = 1; // Giả sử n là số nguyên tố
        for(i = 2; i <= n / 2; i++) {
            if(n % i == 0) {
                so_nguyen_to = 0; // n không phải là số nguyên tố
                break;
            }
        }
        if(so_nguyen_to) {
            printf("%d la so nguyen to!\n", n);
        } else {
            printf("%d khong phai la so nguyen to!\n", n);
        }
    }
    printf("\n");
    //bai tap 7.11:
    printf("Bai tap 7.11: \n");
    double epsilon;
    printf("Nhap epsilon: ");
    scanf("%lf", &epsilon);

    n = 1; // sử dụng lại biến n đã khai báo ở đầu
    long long giaithua = 1;
    double mot_chia_giaithua, tong1 = 1;
    for(n = 1; ; n++) {
        giaithua *= n;                         //tinh n!
        mot_chia_giaithua = 1.0 / giaithua; //tinh 1/(n!)

        if (mot_chia_giaithua < epsilon) {
            break;
        }
        tong1 += mot_chia_giaithua;
    }
    printf("Tong S = %f\n", tong1);
    printf("Dung lai tai n = %d\n", n);
    printf("\n");

    return 0;
}

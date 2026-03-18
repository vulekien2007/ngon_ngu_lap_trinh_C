#include<stdio.h>
#include<string.h>

int main()
{
    //Bai 1: tinh mu 2, 3, 4 cua 1 so thuc
/*
    float a;
    printf("a = ");
    scanf("%f",&a);

    printf("a^2 = %.2f\n",a*a);
    printf("a^3 = %.2f\n",a*a*a);
    printf("a^4 = %.2f\n",a*a*a*a);
*/
    //Bai 2: Nhap ngay thang nam sinh cua ban
/*
    int a, b, c;

    printf("Nhap ngay sinh cua ban: ");
    scanf("%d", &a);
    printf("Nhap thang sinh cua ban: ");
    scanf("%d", &b);
    printf("Nhap nam sinh cua ban: ");
    scanf("%d", &c);
    printf("Ngay sinh cua ban la: %02d/%02d/%04d\n", a, b, c);
*/
    //Bai 3: Tinh tong, hieu, tich, thuong cua 2 so nguyen
/*
    int a, b;
    printf("nhap vao 2 so nguyen a = ", &a);
    scanf("%d", &a);
    printf("nhap vao 2 so nguyen b = ", &b);
    scanf("%d", &b);
    printf("Tong cua 2 so la: %d\n", a + b);
    printf("Hieu cua 2 so la: %d\n", a - b);
    printf("Tich cua 2 so la: %d\n", a * b);
    printf("Thuong cua 2 so la: %f\n", (float)a / b);
*/
    //bai 4: Tinh dien tich va the tich hinh cau
/*  
    float a;
    printf("Nhap vao ban kinh hinh cau: ");
    scanf("%f", &a);
    printf("Ban kinh hinh cau la: %.2f\n", 4*3.14*a*a);
    printf("The tich hinh cau la: %.2f\n", (4/3)*3.14*a*a*a);
*/
    //Bai 5: Tinh thoi gian tu giay sang gio, phut, giay
/*
    int a;
    printf("So giay ban muon doi: ");
    scanf("%d", &a);
    printf("Thoi gian cu the: %02d:%02d:%02d \n", a/3600, (a%3600)/60, a%60);
*/
    //Bai 6: Nhap thong tin sinh vien
    // (Theo de bai: nhap thong tin cua 2 sinh vien, sau do in tat ca ra man hinh)
    
    char ten1[50], ten2[50];
    char que1[50], que2[50];
    int tuoi1, tuoi2;

    // --- NHẬP SINH VIÊN 1 ---
    printf("Nhap thong tin sinh vien 1:\n");
    printf("Ho va ten: ");
    fgets(ten1, sizeof(ten1), stdin);
    ten1[strcspn(ten1, "\n")] = 0;

    printf("Que quan: ");
    fgets(que1, sizeof(que1), stdin);
    que1[strcspn(que1, "\n")] = 0;

    printf("Tuoi: ");
    scanf("%d", &tuoi1);
    while(getchar() != '\n');

    // --- NHẬP SINH VIÊN 2 ---
    printf("Nhap thong tin sinh vien 2:\n");
    printf("Ho va ten: ");
    fgets(ten2, sizeof(ten2), stdin);
    ten2[strcspn(ten2, "\n")] = 0;

    printf("Que quan: ");
    fgets(que2, sizeof(que2), stdin);
    que2[strcspn(que2, "\n")] = 0;

    printf("Tuoi: ");
    scanf("%d", &tuoi2);

    // in ra thong tin sinh vien
    printf("Cac sinh vien da nhap vao:\n");
    printf("*----------------------*------------*------*\n");
    printf("|         Ten          |  Que quan  | Tuoi |\n");
    printf("*----------------------*------------*------*\n");
    
    // In SV 1
    printf("| %-20s | %-10s | %-4d |\n", ten1, que1, tuoi1);
    printf(" ------------------------------------------\n");
    // In SV 2
    printf("| %-20s | %-10s | %-4d |\n", ten2, que2, tuoi2);
    printf("*----------------------*------------*------*\n");

    return 0;
}     

#include<stdio.h>
#include<math.h>
#include<time.h>
#include<stdlib.h>
int main()
{
    //bai tap 1:
    int n, tram, chuc, donvi, month, so_tuoi, nam_sinh;
    float a, b, c, min, delta, x1, x2, x;
    printf("bai tap 1: tim so chan so le\n");
    printf("nhap so nguyen tu ban phim: ");
    scanf("%d", &n);
    // su dung cau lenh if else de xac dinh so vua nhap
    if(n % 2 == 0)
    printf("so vua nhap la so chan\n");
    else
    printf("so vua nhap la so le\n");
    printf("\n");
    
    //bai tap 2:
    printf("bai tap 2: tim so lon nhat\n");
    printf("nhap so nguyen a: ");
    scanf("%f", &a);
    printf("nhap so nguyen b: ");
    scanf("%f", &b);
    // su dung cau lenh if else de xac dinh so vua nhap
    if(a > b)
    printf("so lon nhat la: %f\n",a);
    else
    printf("so lon nhat la: %f\n",b);
    printf("\n");

    //bai tap 3:
    printf("bai tap 3: tim so nho nhat\n");
    printf("nhap so thuc thu nhat: ");
    scanf("%f", &a);
    printf("nhap so thuc thu hai: ");
    scanf("%f", &b);
    printf("nhap so thuc thu ba: ");
    scanf("%f", &c);
    // su dung cau lenh if else de xac dinh so vua nhap
    min = a;
    if(b < min)
    min = b;
    if(c < min)
    min = c;
    printf("so nho nhat la: %f\n",min);
    printf("\n");

    //bai tap 4:
    printf("bai tap 4: kiem tra 3 canh co tao thanh hinh tam giac hay khong\n");
    printf("nhap canh thu nhat: ");
    scanf("%f", &a);
    printf("nhap canh thu hai: ");
    scanf("%f", &b);
    printf("nhap canh thu ba: ");
    scanf("%f", &c);
    // su dung cau lenh if else de xac dinh so vua nhap
    if(a + b > c && a + c > b && b + c > a)
    printf("3 canh vua nhap la 3 canh cua 1 tam giac\n");
    else
    printf("3 canh vua nhap khong phai la 3 canh cua 1 tam giac\n");
    printf("\n");

    //bai tap 5:
    printf("bai tap 5: giai phuong trinh bac hai\n");
    printf("nhap a = ");
    scanf("%f", &a);
    printf("nhap b = ");
    scanf("%f", &b);
    printf("nhap c = ");
    scanf("%f", &c);
    //tinh delta
    delta = b*b - 4*a*c;
	printf("\nDelta = %.2f\n", delta);
// Sử dụng cấu trúc if - else if - else cho mạch lạc
    if (delta > 0) {
        printf("Phuong trinh co 2 nghiem phan biet:\n");
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("x1 = %.2f\n", x1);
        printf("x2 = %.2f\n", x2);
    } 
    else if (delta == 0) {
        printf("Phuong trinh co nghiem kep:\n");
        x = -b / (2 * a);
        printf("x = %.2f\n", x);
    } 
    else {
        printf("Phuong trinh vo nghiem\n");

    }
    printf("\n");

    //bai tap 6: doc so co 3 chu so
    printf("bai tap 6: Doc so co 3 chu so\n");
    printf("Nhap vao mot so co 3 chu so (100-999): ");
    scanf("%d", &n);

    if (n < 100 || n > 999) {
        printf("Vui long nhap so trong khoang 100 den 999.\n");
        return 0;
    }

    tram = n / 100;
    chuc = (n / 10) % 10;
    donvi = n % 10;

    // Doc hang tram
    switch (tram) {
        case 1: printf("Mot tram "); break;
        case 2: printf("Hai tram "); break;
        case 3: printf("Ba tram "); break;
        case 4: printf("Bon tram "); break;
        case 5: printf("Nam tram "); break;
        case 6: printf("Sau tram "); break;
        case 7: printf("Bay tram "); break;
        case 8: printf("Tam tram "); break;
        case 9: printf("Chin tram "); break;
    }

    // Doc hang chuc
    if (chuc == 0 && donvi != 0) {
        printf("le ");
    } else if (chuc == 1) {
        printf("muoi ");
    } else if (chuc > 1) {
        switch (chuc) {
            case 2: printf("hai muoi "); break;
            case 3: printf("ba muoi "); break;
            case 4: printf("bon muoi "); break;
            case 5: printf("nam muoi "); break;
            case 6: printf("sau muoi "); break;
            case 7: printf("bay muoi "); break;
            case 8: printf("tam muoi "); break;
            case 9: printf("chin muoi "); break;
        }
    }

    // Doc hang don vi
    if (donvi != 0) {
        switch (donvi) {
            case 1: printf("mot"); break;
            case 2: printf("hai"); break;
            case 3: printf("ba"); break;
            case 4: printf("bon"); break;
            case 5: 
                if (chuc == 0) printf("nam"); 
                else printf("lam"); // Quy tac tieng Viet: muoi lam
                break;
            case 6: printf("sau"); break;
            case 7: printf("bay"); break;
            case 8: printf("tam"); break;
            case 9: printf("chin"); break;
        }
    }
    printf("\n\n");
    
    //bai tap 7: xac dinh so ngay trong thang
    printf("bai tap 7: Xac dinh so ngay trong thang\n");
    printf("nhap thang: ");
    scanf("%d", &n);
    //dieu kien thang hop le
    if(n < 1 || n > 12) {
        printf("Thang khong hop le. Vui long nhap thang tu 1 den 12.\n");
        return 0;
    }
    // su dung cau lenh switch de xac dinh so ngay trong thang
    month = n;
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            printf("Thang %d co 31 ngay.\n", month);
            break;
        case 4: case 6: case 9: case 11:
            printf("Thang %d co 30 ngay.\n", month);
            break;
        case 2:
            printf("Thang %d co 28 hoac 29 ngay.\n", month);
            break;
    }
    printf("\n");

    //bai tap 8: xac dinh nang luc cua sinh vien
    printf("bai tap 8: Xac dinh nang luc cua sinh vien \n");
    printf("nhap diem trung binh cua sinh vien: ");
    scanf("%f", &a);

    // dieu kien diem hop le
    if(a < 0 || a > 10) {
        printf("Diem khong hop le. Vui long nhap diem tu 0 den 10.\n");
        return 0;
    }

    // xac dinh nang luc xep loai cua sinh vien
    if(a >=0 && a < 5){
    printf("Sinh vien xep loai: Yeu\n");
    }
    else if(a >= 5 && a < 7) {
        printf("Sinh vien xep loai: Trung binh\n");
    }
    else if(a >= 7 && a < 8) {
        printf("Sinh vien xep loai: Kha\n");
    }
    else if(a >= 8 && a < 9) {
        printf("Sinh vien xep loai: Gioi\n");
    }
    else if(a >= 9 && a <= 10) {
        printf("Sinh vien xep loai: Xuat sac\n");
    }
    printf("\n");

    //bai tap 9: xac dinh do tuoi cua con nguoi
    printf("bai tap 9: Xac dinh do tuoi cua con nguoi \n");
    printf("nhap nam sinh cua ban (truoc nam 2026): ");
    scanf("%d", &nam_sinh);
    so_tuoi = 2026 - nam_sinh; //tinh do tuoi hien tai
    //dieu kien nam sinh hop le
    if(so_tuoi < 0) {
        printf("Nam sinh khong hop le. vui long nhap nam sinh nho hon hoac bang 2026. \n");
        return 0;
    }
    // xac dinh do tuoi cua con nguoi
    if(so_tuoi >= 0 && so_tuoi < 6) {
        printf("Ban la tre em\n");
    }
    else if(so_tuoi >= 6 && so_tuoi < 11) {
        printf("Ban la hoc sinh cap 1\n");
    }
    else if(so_tuoi >= 11 && so_tuoi < 15) {
        printf("Ban la hoc sinh cap 2\n");
    }
    else if(so_tuoi >=15 && so_tuoi < 18) {
        printf("ban la hoc sinh cap 3\n");
    }
    else if(so_tuoi >= 18 && so_tuoi < 40) {
        printf("Ban la thanh nien\n");
    }
    else if(so_tuoi >= 40 && so_tuoi < 60) {
        printf("Ban la nguoi trung nien\n");
    }
    else if(so_tuoi >= 60) {
        printf("Ban la nguoi gia\n");
    }
    printf("\n");
	
	//bai tap 10: Viet chuong trinh ban ve xem phim
    int loai_ve, ngay_xem, so_luong_ve;
    char ten_phim[100];
	printf("bai tap 10: ban ve xem phim\n");
    printf("ten phim: ");
 
    scanf("%s", ten_phim);
    printf("so luong ve: ");
    scanf("%d", &so_luong_ve);

    printf("loai ve (Nhap 1- Tre em, khac-Nguoi lon): ");
    scanf("%d", &loai_ve);
    if(loai_ve == 1) {
        printf("Loai ve: Tre em\n");
    } else {
        printf("Loai ve: Nguoi lon\n");
    }

    printf("ngay xem (nhap 1- chu nhat, khac- ngay thuong): ");
    scanf("%d", &ngay_xem);
    if(ngay_xem == 1) {
        printf("ngay xem: chu nhat\n");
    } else {
        printf("ngay xem: ngay thuong\n");
    }
    float tong_tien = (ngay_xem == 1 ? 10 : 7) * so_luong_ve * (loai_ve == 1 ? 0.5 : 1);
    // in ra thong tin ve
    printf("\nThong tin ve:\n");
    printf("- ten phim: %s\n", ten_phim);
    printf("- ngay xem: %s\n", ngay_xem == 1 ? "chu nhat" : "ngay thuong");
    printf("- so luong ve: %d\n", so_luong_ve);
    printf("- so tien thanh toan: %.2f\n", tong_tien );
    printf("\n");

    //bai tap 11: Quay so may man
    int user[3], machine[3];
    int checked[3] = {0, 0, 0}; // Đánh dấu các số của máy đã được "khớp"
    int count = 0;

    // 1. Nhập dữ liệu và kiểm tra lỗi ngay lập tức
    printf("bai tap 11: Quay so may man\n");
    printf("--- QUAY SO MAY MAN ---\n");
    for (int i = 0; i < 3; i++) {
        printf("Nhap so thu %d (0-9): ", i + 1);
        if (scanf("%d", &user[i]) != 1 || user[i] < 0 || user[i] > 9) {
            printf("Loi: Nhap sai dinh dang! Thoat chuong trinh.\n");
            return 0;
        }
    }

    // 2. Máy quay số ngẫu nhiên
    srand(time(NULL));
    printf("\nKet qua may quay: ");
    for (int i = 0; i < 3; i++) {
        machine[i] = rand() % 10;
        printf("%d ", machine[i]);
    }
    printf("\n");

    // 3. Logic so sánh: Duyệt từng số của người dùng (user)
    // Sau đó tìm xem số đó có xuất hiện trong bộ số của máy (machine) không
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            // Nếu số người dùng khớp với số máy VÀ số máy đó chưa được đếm cho số khác
            if (user[i] == machine[j] && checked[j] == 0) {
                count++;
                checked[j] = 1; // Đánh dấu số máy này đã dùng để so khớp, không dùng lại nữa
                break;          // Tìm thấy rồi thì dừng vòng lặp trong, chuyển sang số user tiếp theo
            }
        }
    }

    // 4. Thông báo kết quả
    printf("Ban doan dung: %d so\n", count);
    if (count == 3) printf("CHUC MUNG! BAN DAT GIAI DAC BIET!\n");
    else if (count == 2) printf("TUYET VOI! BAN DAT GIAI NHAT!\n");
    else if (count == 1) printf("BAN DAT GIAI KHUYEN KHICH!\n");
    else printf("RAT TIEC! CHUC MAY MAN LAN SAU.\n");

    return 0;  

}

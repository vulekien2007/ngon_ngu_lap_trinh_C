#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
/*
	//Bai tap 1: phan thuc, phan ao
	int x, y;
	
	printf("nhap vao (x,y):");
	scanf("%d%*c%d",&x, &y);
	printf("phan thuc la: x = %d\n", x);
	printf("phan ao la: y = %d\n",y);
*/
	//Bai tap 2:
/*
	float a, b, c;
    float Kq1, Kq2;

    // Nhập giá trị từ bàn phím
    printf("Nhap a: ");
    scanf("%f", &a);
    printf("Nhap b: ");
    scanf("%f", &b);
    printf("Nhap c: ");
    scanf("%f", &c);

    // Tính Kq1 = a++ + ++a
    // Lưu ý: Cách xử lý biểu thức này có thể khác nhau tùy vào trình biên dịch (Compiler)
    // vì nó vi phạm quy tắc "Sequence Points" trong C.
    Kq1 = a++ + ++a;

    // Tính Kq2 = --a - b-- * ++c
    Kq2 = --a - b-- * ++c;

    // Xuất kết quả
    printf("\n--- Ket qua sau khi thuc hien phep toan ---\n");
    printf("Kq1 = %f\n", Kq1);
    printf("Kq2 = %f\n", Kq2);
    printf("Gia tri hien tai cua a = %f\n", a);
    printf("Gia tri hien tai cua b = %f\n", b);
    printf("Gia tri hien tai cua c = %f\n", c);
*/
	// Bai tap 3
/*
	float a, b, c, max;
	printf("nhap vao 3 so thuc a, b, c: ");
	scanf("%f%*c%f%*c%f", &a, &b, &c);
	
	max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
	printf("So lon nhat la: %.2f\n", max);
*/	
	//Bai tap 4: tinh gia tien dien
/*
    int soDien;
    double tienDien = 0;

    printf("Nhap so dien tieu thu trong thang: ");
    scanf("%d", &soDien);

    // su dung toan tu 3 ngôi de tinh tien dien
    tienDien = (soDien <= 50)  ? (soDien * 500) :
               (soDien <= 100) ? (50 * 500 + (soDien - 50) * 1000) :
               (soDien <= 150) ? (50 * 500 + 50 * 1000 + (soDien - 100) * 1200) :
                                 (50 * 500 + 50 * 1000 + 50 * 1200 + (soDien - 150) * 1600);

    // Hiển thị kết quả
    printf("So dien tieu thu trong thang la: %d\n", soDien);
    printf("So tien phai tra la            : %f\n", tienDien);
*/  
/*
    //Bai tap 5: tinh delta	
	float a, b, c, delta;
	
	printf("nhap a = ");
	scanf("%f", &a);
	printf("nhap b = ");
	scanf("%f", &b);
	printf("nhap c = ");
	scanf("%f", &c);

// cong thuc tinh delta
	delta = b*b - 4*a*c;
	printf("delta = %.2f\n", delta);
*/
	//Bai tap 6: giai phuong trinh bac 2 dung ternary operator
/*
	float a, b, c, delta;
	float x1, x2, x;
	
	printf("--- Giai phuong trinh bac 2: a.x^2 + b.x + c = 0 ---\n");
	printf("nhap a = ");
	scanf("%f", &a);
	printf("nhap b = ");
	scanf("%f", &b);
	printf("nhap c = ");
	scanf("%f", &c);
	
	// Tinh delta
	delta = b*b - 4*a*c;
	printf("\nDelta = %.2f\n", delta);
	
	// Su dung ternary operator de xet cac truong hop
	(delta > 0) ? 
		(printf("Phuong trinh co 2 nghiem phan biet:\n"),
		 x1 = (-b + sqrt(delta)) / (2*a),
		 x2 = (-b - sqrt(delta)) / (2*a),
		 printf("x1 = %.2f\n", x1),
		 printf("x2 = %.2f\n", x2))
	: (delta == 0) ?
		(printf("Phuong trinh co 1 nghiem kep:\n"),
		 x = -b / (2*a),
		 printf("x = %.2f\n", x))
	: 
		printf("Phuong trinh vo nghiem\n");
*/	
	//Bai tap 7: tinh gia tri bieu thuc

	double x, y, z, x1, x2, x3, x4;

	printf("nhap x = ");
	scanf("%lf", &x);
	printf("nhap y = ");
	scanf("%lf", &y);
	printf("nhap z = ");
	scanf("%lf", &z);

	if (z < 0) {
		printf("z phai >= 0 de tinh sqrt(z)\n");
		return 1;
	}

	// chay ra ket qua
	printf("Gia tri cua toan bo bieu thuc la:\n");
	x1 = x + y + sqrt(z);
	x2 = x*x + y*y + 1;
	if (x2 == 0) {
		printf("Mau so bang 0, khong the tinh\n");
		return 1;
	}
	x3 = fabs(sin(x) - z*cos(y));
	x4 = (x1 / x2) - x3;
	printf("F = %f\n", x4);

return 0;	
}

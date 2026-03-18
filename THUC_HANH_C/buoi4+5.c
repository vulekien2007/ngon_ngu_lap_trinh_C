#include<stdio.h>
#include<string.h>

int main()
{
	//bai tap: 4.2
/*	int d, m, y, x;
	char ch1, ch2;
	float f;

	printf("Nhap vao 1 so nguyen: ");
	scanf("%d", &x);
	printf("Ket qua: %d\n", x);

	printf("Nhap vao ngay, thang, nam lien tiep (VD: 12122026): ");
	scanf("%2d%2d%4d", &d, &m, &y);
	printf("Ket qua: %02d%02d%04d\n", d, m, y);

	printf("Nhap vao ngay/thang/nam (VD: 12/12/2026): ");
	scanf("%2d/%2d/%4d", &d, &m, &y);
	printf("Ket qua: %02d/%02d/%04d\n", d, m, y);

	// </newline> if co ki tu thua
	while (getchar() != '\n');
	printf("Nhap vao hai ki tu (cach nhau khoang trang hoac lien tiep): ");
	scanf(" %c %c", &ch1, &ch2);
	printf("Ket qua:ch1 %c ch2 %c\n", ch1, ch2);

	while (getchar() != '\n');
	printf("Nhap vao 1 so thuc: ");
	scanf("%f", &f);
	printf("Ket qua: %.2f\n", f);
*/
	//bai tap: 4.1
/*
	int a;
	printf("so nguyen nhap vao tu ban phim:");
	scanf("%d", &a);
	printf("So vua nhap: %d\n",a);
	printf("Tuong ung: \\%d%%\\\"%d%%\"\\\'%d%%\'\\",a,a,a);
*/
	//bai tap: 4.4
/*
	int month1 , day1, year1, month2, day2, year2;
	printf("Enter a date in the form mm-dd-yyyy: ");
	scanf("%d%*c%d%*c%d", &month1, &day1, &year1 );
    printf( "month = %d  day = %d  year = %d\n\n", month1, day1, year1 );
    printf( "Enter a date in the form mm/dd/yyyy: " );
	scanf( "%d%*c%d%*c%d", &month2, &day2, &year2 );
	printf( "month = %d  day = %d  year = %d\n", month2, day2, year2 );
*/
	//bai tap: 4.3
/*
	float r;
	printf("Nhap ban kinh vong trong: ");
	scanf("%f", &r);
	printf("Dien tich hinh tron la: %f\n", 3.14*r*r);
	printf("Chu vi hinh tron la: %f\n", 2*3.14*r);
*/
	//Bai tap: 4.4 thanh toan tien sach
    // Khai báo các biến lưu trữ thông tin

	char title[100];
    char isbn[20];
    double price;
    int quantity;
    
    // Nhập dữ liệu từ người dùng
    printf("--- Nhap thong tin mua sach ---\n");
    
    printf("Nhap ma sach (ISBN): ");
    scanf("%s", isbn);
    getchar(); // Đọc bỏ ký tự xuống dòng thừa

    printf("Nhap ten sach (Title): ");
    fgets(title, sizeof(title), stdin);
    title[strcspn(title, "\n")] = '\0'; // Xóa ký tự xuống dòng ở cuối chuỗi

    printf("Nhap gia sach (Price): ");
    scanf("%lf", &price);

    printf("Nhap so luong (Quantity): ");
    scanf("%d", &quantity);

    // Tính toán số tiền
    double subtotal = price * quantity;
    double vat = subtotal * 0.05; // 5% VAT
    double total_pay = subtotal + vat;

    // Hiển thị hóa đơn (Invoice Display)
    printf("\n\n");
    printf("BK Bookseller\n\n");
    
    // Header của bảng
    printf("%-5s %-15s %-25s %-12s %-12s\n", "Qty", "ISBN", "Title", "Price", "Total");
    printf("----------------------------------------------------------------------------\n");
    
    // Dòng dữ liệu sản phẩm
    printf("%-5d %-15s %-25s %-12.2f %-12.2f\n", quantity, isbn, title, price, subtotal);
    
    printf("\n");
    printf("VAT (5%%): %43.2f\n", vat);
    printf("You pay: %44.2f\n", total_pay);
    printf("----------------------------------------------------------------------------\n");

	return 0;
}

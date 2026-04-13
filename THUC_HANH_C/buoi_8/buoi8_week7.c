#include<stdio.h>
#define TONGGACHO 36
int main(){
	int i, j, n, ga, cho;
	//vd 7.3: in ra cac so chan va le
	printf("Vi du 7.3: cac so chan va le\n");
	printf("cac so chan:\n");
	for(i = 2;i <= 30;i +=2)
		printf("%5d",i);
	printf("\nCac so le:\n");
		for(i = 1;i <= 30;i += 2)
		printf("%5d",i);
	printf("\n");
	//vd 7.4: in ra ma tran
	printf("Vi du 7.4: Ma tran\n");
	printf("Nhap vao so nguyen duong n = ");
	scanf("%d", &n);
	if(n < 1) 
		printf("n nhap vao khong hop le!\n");
	else
	{
		printf("Ma tran %dx%d:\n",n,n);
		for(i = 1;i <= n;i ++)
		{
			for(j = 1;j <= n;j++)
				printf("%5d",i);
			printf("\n");
		}
	}
	printf("\n");
	//vd 7.5: Bai toan ga cho
	printf("Vi Du 7.5: Bai toan ga cho\n");
	printf("Vua ga vua cho\n");
	printf("Bo lai cho tron\n");
	printf("Ba muoi sau (36) con\n");
	printf("Mot tram (100) chan chan\n");
	printf("Hoi may ga?, may cho?\n");
	printf("Dap an la:\n");
	for(i=1;i<=100000;i++){
		for(j=1;j<=100000;j++)
			if((i+j == TONGGACHO) && (i*2+j*4 == 100))
			{
				ga = i;
				cho = j;
				break;
			}
			if (ga != 0 && cho != 0)
				break;
		}
	printf("So Ga = %d; So Cho = %d\n", ga, cho);	
	printf("\n");
	//Bai tap 7.1: tim so de thoa man đkien
	int count = 0;
	printf("Bai tap 7.1: tim so thoa man dieu kien \n");
	for(i = 1;i < 1000;i++) {
		int hang_tram = i / 100;
		int hang_chuc = (i / 10) % 10;
		int hang_don_vi = i % 10;
		if (hang_chuc == hang_tram + hang_don_vi && i % 3 == 0) {
			count++;
			printf("%0.3d\t", i);

			if (count % 10 == 0)
				printf("\n");
		}
	}
	printf("\nSo luong so thoa man dieu kien: %d\n", count);
	printf("\n");
	//Bai tap 7.2:tinh tien lai gui tiet kiem
	printf("Bai tap 7.2: Tinh tien lai gui tiet kiem\n");
    char ten[100];
    double tien_goc, lai_suat_thang, tien_lai, so_du;
    double tong_lai = 0;
    int so_thang; // Biến mới để lưu số tháng người dùng muốn gửi

    // 1. Nhập dữ liệu
    printf("Nhap ho ten khach hang: ");
    fgets(ten, sizeof(ten), stdin);

	while (getchar() != '\n'); // Xóa bộ đệm sau khi đọc tên
    printf("Nhap so tien gui ban dau: ");
    scanf("%lf", &tien_goc);

    printf("Nhap lai suat hang thang (%%): ");
    scanf("%lf", &lai_suat_thang);

    printf("Nhap so thang gui tiet kiem: ");
    scanf("%d", &so_thang); // Nhập số tháng tại đây

    // 2. In tiêu đề bảng
    printf("\nTai khoan khach hang: %s\n", ten);
    printf("%-7s %-15s %-15s %-15s\n", "Thang", "Tien dau ky", "Tien lai", "So du");
    printf("----------------------------------------------------------\n");

    // 3. Vòng lặp for chạy từ 1 đến so_thang
    for (int i = 1; i <= 12; i++) {
        // Tính lãi tháng hiện tại
        tien_lai = tien_goc * (lai_suat_thang / 100);
        
        // Tính số dư (Gốc + Lãi)
        so_du = tien_goc + tien_lai;
        
        // Cộng dồn lãi vào tổng
        tong_lai += tien_lai;

        // In kết quả tháng i
        printf("%-7d %-15.0f %-15.0f %-15.0f\n", i, tien_goc, tien_lai, so_du);

        // Gán số dư cuối kỳ này thành tiền gốc kỳ sau (Lãi kép)
        tien_goc = so_du;
    }

    // 4. Tổng kết
    printf("----------------------------------------------------------\n");
    printf("Tong lai sau %d thang: %.0f\n", so_thang, tong_lai);
    printf("Tong so tien nhan duoc: %.0f\n", so_du);
	printf("\n");

	//Bai tap 7.3: tao tam giac (*)
	printf("Bai tap 7.3: tao tam giac (*) \n");
	printf("nhap chieu cao tam giac (*): ");
	scanf("%d", &n);
	for(i = 1; i <= n; i++) {
		for(j = 1; j <= i; j++) {
			printf("* ");
		}
		printf("\n");
	}
	// bai tap 7.4: a) tao hinh tam giac * nguoc
	printf("Bai tap 7.4: \n");
	printf("a) tao hinh tam giac (*) nguoc\n");
	printf("nhap chieu cao tam giac (*): ");
	scanf("%d", &n);
	for(i = n; i >= 1; i--) {
		for(j = 1; j <= i; j++) {
			printf("* ");
		}
		printf("\n");
	}
	// Bai tap 7.4: b) tao hinh tam giac (*) can
	printf("b) tao hinh tam giac (*) can\n");
	printf("nhap chieu cao tam giac (*): ");
	scanf("%d", &n);
	for(i = 1; i <= n; i++) {
		for(j = 1; j <= n - i; j++) {
			printf(" ");
		}
		for(j = 1; j <= 2 * i - 1; j++) {
			printf("* ");
		}
		printf("\n");
	}
	printf("\n");
	return 0;
}

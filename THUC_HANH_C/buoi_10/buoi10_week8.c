#include<stdio.h>
#define ENTER '\n'
int main()
 {
    float d;
	//vd: 8.2  
    printf("Nhap diem cua sinh vien: ");
    scanf("%f",&d);
    while(d<0 || d>10)
    {
    printf("Ban da nhap diem khong hop le.\n");
    printf("Moi ban nhap lai diem sinh vien: ");
    scanf("%f",&d);
    }
    printf("\nDiem cua sinh vien vua nhap la: %5.2f\n",d);
	printf("\n");
	
	//vd:8.3
	int i = 1,sum = 0;
	do {
		sum += i;
		i++;
	} while (i <= 50);
	printf("Tong tu 1 den 50 la %d\n",sum);
	printf("\n");
	//vd:do while
	float n;
	printf("Nhap diem cua sinh vien: ");
	do {
		scanf("%f", &n);
		if (n<0 || n>10) {
		
		printf("Ban da nhap diem khong hop le.\n");
    	printf("Moi ban nhap lai diem sinh vien: ");
		}
	}
	while(n<0 || n>10);
    printf("\nDiem cua sinh vien vua nhap la: %f\n",n);
    
	//vd 8.6
	char c;
	printf("Nhap vao cac ky tu (go Enter de dung lai): ");
	while(c != -1)
	{
	c = getchar();
	if(c == ENTER) break;
	else
	if(c >= '0' && c <= '9') continue;
	else putchar(c);
	}
	putchar (ENTER);
	return 0;
}

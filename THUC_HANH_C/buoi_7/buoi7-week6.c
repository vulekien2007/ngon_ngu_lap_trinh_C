#include<stdio.h>

int main()
{
	//VD 6.3: nhap mot so nguyen tu ban phim su dung cau lenh if else 
	int a;
	printf("bai tap: 6.3\n");
	printf("nhap so nguyen tu ban phim: \n");
	scanf("%d", &a);
	// su dung cau lenh if else de xac dinh so vua nhap
	if(a < 10)
	printf("so vua nhap be hon 10");
	else if(a == 10)
	printf("so vua nhap bang 10");
	else if(10 < a < 20)
	printf("so vua nhap lon hon 10 va be hon 20");
	else if (a == 20)
	printf("so vua nhap bang 20");
	else
	printf("so vua nhap lon hon 20");
	printf("\n\n");

	//VD 6.4: nhap mot so duong tu ban phim
	printf("bai tap: 6.4\n");
	printf("Nhap mot so nguyen duong: \n");
	scanf("%d", &a);
	// su dung cau lenh switch de xac dinh so vua nhap
	switch (a){
	case 1:
		printf("so vua nhap la mot\n");
		break;
	case 2:
		printf("so vua nhap la hai\n");
		break;
	case 3:
		printf("so vua nhap la ba\n");
		break;
	case 4:
		printf("so vua nhap la bon\n");
		break;
	case 5:
		printf("so vua nhap la nam\n");
		break;
	default:
		printf("so vua nhap lon hon 5\n");
	break;		
	}
	return 0;
}

#include<stdio.h>
#include<conio.h>
void main()
{
/*  VD: 3.2
 	printf("%d\n",455);
	printf("%i\n",455);          //i giong nhu d//
	printf("%d\n",+455);
	printf("%d\n",-455);
	printf("%hd\n",32000);
	printf("%ld\n",2000000000);
	printf( "%o\n", 455 );
	printf( "%u\n", 455 );
	printf( "%u\n", -455 );
	printf( "%x\n", 455 );
	printf( "%X\n", 455 );*/
/*	VD: 3.3	
	printf("%e\n",1234567.89);
	printf("%e\n",+1234567.89);
	printf("%e\n",-1234567.89);
	printf("%E\n",1234567.89);
	printf("%f\n",1234567.89);
	printf("%g\n",1234567.89);
	printf("%G\n",1234567.89);*/
/*	VD: 3.5	
	char character ='A';
	char string[] = "This is a string";
	const char *stringPtr = "This is a slso a string";
	printf("%c\n", character );
	printf("%s\n","this is a string");
	printf("%s\n",string);
	printf("%s\n",stringPtr); */
/*  VD: 3.6	
	int *ptr;
	int x = 12345,y;
	
	ptr = &x;
	printf("The valua of ptr is %p\n",ptr);
	printf("the address of x is %p\n",&x);
	
	printf("Total characters printed in this line is:%n",&y);
	printf("%d\n\n",y);
	
	y = printf("This line has 28 characters\n");
	printf( "%d characters were printed\n\n", y );
	printf( "Printing a %% in a format control string\n");*/
/*  VD: 3.7
	printf("%c %c %c %c\n",'B','I','D','V') ;
	printf("%d %d %d %d\n",'B','I','D','V') ;*/
/*  VD: 3.9
//khai bao bien
	int a;
	float x;
	char ch;
	char str[100];
	//nhap du lieu
	printf("Nhap vao mot so nguyen: ");
	scanf("%d.",&a);
	printf("\n Nhap vao mot so thuc: ");
	scanf("%f",&x);
	printf("\n Nhap vao mot ki tu: ");
	fflush(stdin);
	scanf("%c",&ch);
	printf("\n Nhap vao mot xau ki tu: ");
	fflush(stdin);
	scanf("%s",str);
// Hien thi du lieu vua nhap vao	
	printf("\n Nhung du lieu vua nhap vao la: ");
	printf("\n So nguyen: %d",a);
	printf("\n So thuc: %f",x);
	printf("\n Ki tu: %c",ch);
	printf("\n Xau ki tu: %s",str);*/
/*  Bai tap 3.7
	int a, b;
	printf("Nhap so thu nhat: ");
	scanf("%d", &a);
	printf("Nhap so thu hai: ");
	scanf("%d", &b);
	printf("Tong cua %d va %d la: %d + %d = %d", a, b, a, b, a + b);*/

	//khai bao bien
	char str[100];
	//nhap du lieu
	puts("Nhap vao mot xau ki tu: ");
	fflush(stdin);
	gets(str);
	// Hien thi du lieu vua nhap vao
	puts("Xau ki tu vua nhap vao: ");
	puts(str);
	puts("An phim bat ky de ket thuc chuong trinh...");
	getch();
}

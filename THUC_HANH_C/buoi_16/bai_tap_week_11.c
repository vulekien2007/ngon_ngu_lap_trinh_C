#include <stdio.h>
#include <string.h>

int main() {
    int choice;
    do {
        printf("\n================= Bai tap week 11 =================\n");
        printf("1. Bai 4: In mang dao nguoc (Dung con tro)\n");
        printf("2. Bai 5: Kiem tra chuoi palindrome\n");
        printf("3. Bai 6: Noi 2 chuoi (Dung con tro)\n");
        printf("4. Bai 11.7: Quan ly luong nhan vien (Dung con tro)\n");
        printf("0. Thoat chuong trinh\n");
        printf("===================================================\n");
        printf("Nhap lua chon cua ban: ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1: {
                int n;
                printf("\n--- BAI 4: IN MANG DAO NGUOC ---\n");
                printf("Nhap so luong phan tu cua mang: ");
                scanf("%d", &n);
                
                int arr[n];
                printf("Nhap cac phan tu cua mang:\n");
                for(int i = 0; i < n; i++) {
                    scanf("%d", &arr[i]);
                }
                
                // Su dung con tro tro den phan tu cuoi cung cua mang
                int *p = arr + n - 1; 
                
                printf("Cac gia tri theo thu tu dao nguoc la: ");
                for(int i = 0; i < n; i++) {
                    printf("%d ", *p);
                    p--; // Lui con tro ve truoc
                }
                printf("\n");
                break;
            }
            
            case 2: {
                char str[100];
                printf("\n--- BAI 5: KIEM TRA CHUOI PALINDROME ---\n");
                printf("Nhap chuoi can kiem tra: ");
                scanf(" %[^\n]", str); // Doc chuoi bao gom co dau cach
                
                int len = strlen(str);
                char *left = str;               // Con tro o dau chuoi
                char *right = str + len - 1;    // Con tro o cuoi chuoi
                int isPalindrome = 1;           // Co danh dau, 1 là dung, 0 la sai
                
                while(left < right) {
                    if(*left != *right) {
                        isPalindrome = 0;
                        break;
                    }
                    left++;
                    right--;
                }
                
                if(isPalindrome) {
                    printf("Chuoi '%s' La chuoi palindrome.\n", str);
                } else {
                    printf("Chuoi '%s' KHONG PHAI la chuoi palindrome.\n", str);
                }
                break;
            }
            
            case 3: {
                char s1[200], s2[100];
                printf("\n--- BAI 6: NOI 2 CHUOI BANG CON TRO ---\n");
                printf("Nhap chuoi thu nhat: ");
                scanf(" %[^\n]", s1);
                printf("Nhap chuoi thu hai: ");
                scanf(" %[^\n]", s2);
                
                char *p1 = s1;
                char *p2 = s2;
                
                // Di chuyen con tro p1 den ky tu ket thuc '\0' cua chuoi s1
                while(*p1 != '\0') {
                    p1++;
                }
                
                // Copy tung ky tu cua chuoi s2 vao sau chuoi s1 thong qua con tro
                while(*p2 != '\0') {
                    *p1 = *p2;
                    p1++;
                    p2++;
                }
                *p1 = '\0'; // Them ky tu ket thuc chuoi
                
                printf("Chuoi sau khi noi: %s\n", s1);
                break;
            }
            
            case 4: {
                int n, namHienTai;
                printf("\n--- BAI 11.7: QUAN LY LUONG NHAN VIEN ---\n");
                printf("Nhap nam hien tai (vi du: 2026): ");
                scanf("%d", &namHienTai);
                printf("Nhap so luong nhan vien (N): ");
                scanf("%d", &n);
                
                float luong[n];
                int namBatDau[n];
                
                for(int i = 0; i < n; i++) {
                    printf("\nNhap thong tin nhan vien ma so %d:\n", i);
                    printf(" - Nam bat dau lam viec: ");
                    scanf("%d", &namBatDau[i]);
                    printf(" - Muc luong hien tai: ");
                    scanf("%f", &luong[i]);
                }
                
                printf("\n--- KET QUA XET TANG LUONG ---\n");
                for(int i = 0; i < n; i++) {
                    float luongSauKhiXet = luong[i];
                    float *ptrLuong = &luongSauKhiXet; // Dung con tro de xu ly luong
                    
                    int soNamLamViec = namHienTai - namBatDau[i];
                    int soLanTang = soNamLamViec / 3;
                    
                    // Cu 3 nam tang 1 lan, moi lan tang 1% thao tac qua con tro
                    for(int j = 0; j < soLanTang; j++) {
                        *ptrLuong = *ptrLuong + (*ptrLuong * 0.01);
                    }
                    
                    printf("Ma NV: %d | Nam bat dau: %d | Luong cu: %.2f | Luong moi: %.2f\n", 
                            i, namBatDau[i], luong[i], *ptrLuong);
                }
                break;
            }
            
            case 0: 
                printf("Da thoat chuong trinh. Tam biet!\n"); 
                break;
                
            default: 
                printf("LLua chon khong hop le, vui long nhap lai!\n");
        }
    } while(choice != 0);
    
    return 0;
}
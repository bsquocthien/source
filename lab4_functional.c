#include <stdio.h>

int tinhTBC ()
{
        int min, max;
        int i;
        float tong = 0, bienDem = 0, trungBinh = 0;

        printf("\n--- CHUONG TRINH TINH TRUNG BINH TONG ---\n");
        printf("Nhap gia tri min: ");
        scanf("%d", &min);
        printf("Nhap gia tri max: ");
        scanf("%d", &max);

        i = min;
        while (i <= max) {
            if (i % 2 == 0) {
                tong += i;
                bienDem++;
            }
            i++; // Tang bien dem de tranh lap vo han
        }

        if (bienDem > 0) {
            trungBinh = tong / bienDem;
            printf("Trung binh tong cac so chia het cho 2 tu %d den %d la: %.2f\n", min, max, trungBinh);
        } else {
            printf("Khong co so nao chia het cho 2 trong khoang tu %d den %d.\n", min, max);
        }
	
	return 0;
}


int hienMenu ()
{	
	    printf("\n+-----------------------------------------+\n");
        printf("|           CHUONG TRINH LAB 4            |\n");
        printf("+-----------------------------------------+\n");
        printf("| 1. Tinh trung binh tong (Cac so chia het cho 2) |\n");
        printf("| 2. Kiem tra so nguyen to                |\n");
        printf("| 3. Kiem tra so chinh phuong             |\n");
        printf("| 4. Thoat                                |\n");
        printf("+-----------------------------------------+\n");
        printf("Xin moi chon chuc nang (1, 2, 3, 4): ");	
	return 0;
}

int main() {
    int choice;
    do {
        // Hien thi menu chuong trinh
        hienMenu();
        
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                // BAI 1: TINH TRUNG BINH TONG CAC SO CHIA HET CHO 2
				tinhTBC();
                break;
            }

            case 2: {
                // BAI 2: KIEM TRA SO NGUYEN TO
                int x;
                int count = 0;
                int i;

                printf("\n--- CHUONG TRINH KIEM TRA SO NGUYEN TO ---\n");
                printf("Nhap vao so x: ");
                scanf("%d", &x);

                if (x < 2) {
                    printf("%d khong phai la so nguyen to.\n", x);
                } else {
                    for (i = 2; i < x; i++) {
                        if (x % i == 0) {
                            count++;
                        }
                    }

                    if (count == 0) {
                        printf("%d la so nguyen to.\n", x);
                    } else {
                        printf("%d khong phai la so nguyen to.\n", x);
                    }
                }
                break;
            }

            case 3: {
                // BAI 3: KIEM TRA SO CHINH PHUONG
                int x;
                int count = 0;
                int i;

                printf("\n--- CHUONG TRINH KIEM TRA SO CHINH PHUONG ---\n");
                printf("Nhap vao so x: ");
                scanf("%d", &x);

                if (x < 0) {
                    printf("%d khong phai la so chinh phuong.\n", x);
                } else {
                    for (i = 1; i < x; i++) {
                        if (i * i == x) {
                            count = 1;
                            break;
                        }
                    }

                    // So 0 va 1 la cac truong hop so chinh phuong dac biet
                    if (x == 0 || x == 1 || count == 1) {
                        printf("%d la so chinh phuong.\n", x);
                    } else {
                        printf("%d khong phai la so chinh phuong.\n", x);
                    }
                }
                break;
            }

            case 4:
                printf("\nThoat khoi chuong trinh. Tam biet!\n");
                break;

            default:
                printf("\nLua chon khong hop le! Vui long chon lai tu 1 den 4.\n");
                break;
        }

    } while (choice != 4); // Lap lai menu cho den khi nguoi dung chon thoat (chon 4)

    return 0;
}

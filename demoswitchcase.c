
#include <stdio.h>

// Ham hien thi menu
void hienThiMenu(void) {
    printf("\n=======================================\n");
    printf("       MENU CHUONG TRINH TONG HOP       \n");
    printf("=======================================\n");

    printf(" 1. Kiem tra so nguyen\n");
    printf(" 2. Tim UCLN va BCNN cua 2 so\n");
    printf(" 3. Tinh tien quan Karaoke\n");
    printf(" 4. Tinh tien dien\n");
    printf(" 5. Doi tien\n");
    printf(" 6. Tinh lai suat vay ngan hang\n");
    printf(" 7. Vay tien mua xe\n");
    printf(" 8. Sap xep thong tin sinh vien\n");
    printf(" 9. Game FPOLY-LOTT (2/15)\n");
    printf(" 10. Tinh toan phan so\n");
    printf(" 0. Thoat chuong trinh\n");

    printf("=======================================\n");
}

int main(void) {
    int luaChon = -1;
    int kyTu;

    do {
        hienThiMenu();

        printf("Moi ban chon (0-10): ");

        if (scanf("%d", &luaChon) != 1) {
            luaChon = -1;
        }

        // Xoa du lieu con lai trong bo dem nhap
        while ((kyTu = getchar()) != '\n'
               && kyTu != EOF) {
        }

        switch (luaChon) {
            case 1:
                printf("Kiem tra so nguyen\n");
                break;

            case 2:
                printf("Tim UCLN va BCNN\n");
                break;

            case 3:
                printf("Tinh tien Karaoke\n");
                break;

            case 4:
                printf("Tinh tien dien\n");
                break;

            case 5:
                printf("Doi tien\n");
                break;

            case 6:
                printf("Tinh lai suat vay\n");
                break;

            case 7:
                printf("Vay tien mua xe\n");
                break;

            case 8:
                printf("Sap xep sinh vien\n");
                break;

            case 9:
                printf("Game FPOLY-LOTT\n");
                break;

            case 10:
                printf("Tinh toan phan so\n");
                break;

            case 0:
                printf("Ket thuc chuong trinh!\n");
                break;

            default:
                printf("Lua chon khong hop le!\n");
        }

        if (luaChon >= 1 && luaChon <= 10) {
            printf("Chuc nang chua duoc xay dung.\n");
        }

        if (luaChon != 0 && kyTu != EOF) {
            printf("\nNhan Enter de tiep tuc...");
            getchar();
        }

    } while (luaChon != 0 && kyTu != EOF);

    return 0;
}


#include <stdio.h>

int main() {
    float diemToan, diemVan, diemTrungBinh;

    printf("Nhap diem Toan: ");
    scanf("%f", &diemToan);

    printf("Nhap diem Van: ");
    scanf("%f", &diemVan);

    diemTrungBinh = (diemToan + diemVan) / 2;

    printf("Diem trung binh = %.2f\n", diemTrungBinh);
    return 0;
}

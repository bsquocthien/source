#include <stdio.h> // Khai báo các hàm nhập và xuất dữ liệu.

// Hàm main là điểm bắt đầu chạy của chương trình C.
int main(void) {
    double soThuNhat, soThuHai; // Lưu hai số do người dùng nhập.
    char toanTu; // Lưu toán tử người dùng chọn.

    printf("Nhập hai số: "); // Yêu cầu người dùng nhập hai số.
    if (scanf("%lf %lf", &soThuNhat, &soThuHai) != 2) { // Đọc hai số và kiểm tra dữ liệu nhập.
        printf("Dữ liệu không hợp lệ. Vui lòng nhập hai số.\n"); // Báo lỗi nếu không nhập đủ hai số.
        return 1; // Kết thúc chương trình với mã báo lỗi.
    }

    printf("Nhập toán tử (+, -, *, /): "); // Yêu cầu người dùng chọn phép tính.
    if (scanf(" %c", &toanTu) != 1) { // Đọc một ký tự toán tử, bỏ qua khoảng trắng đầu vào.
        printf("Không đọc được toán tử.\n"); // Báo lỗi nếu không nhập được toán tử.
        return 1; // Kết thúc chương trình với mã báo lỗi.
    }

    switch (toanTu) { // Chọn phép tính tương ứng với toán tử đã nhập.
        case '+': // Thực hiện phép cộng.
            printf("Kết quả: %.2f\n", soThuNhat + soThuHai); // Cộng hai số và in kết quả.
            break; // Kết thúc nhánh cộng.
        case '-': // Thực hiện phép trừ.
            printf("Kết quả: %.2f\n", soThuNhat - soThuHai); // Trừ số thứ hai khỏi số thứ nhất.
            break; // Kết thúc nhánh trừ.
        case '*': // Thực hiện phép nhân.
            printf("Kết quả: %.2f\n", soThuNhat * soThuHai); // Nhân hai số và in kết quả.
            break; // Kết thúc nhánh nhân.
        case '/': // Thực hiện phép chia.
            if (soThuHai == 0.0) { // Kiểm tra số chia để tránh chia cho 0.
                printf("Không thể chia cho 0.\n"); // Báo lỗi nếu số chia bằng 0.
            } else {
                printf("Kết quả: %.2f\n", soThuNhat / soThuHai); // Chia số thứ nhất cho số thứ hai.
            }
            break; // Kết thúc nhánh chia.
        default: // Xử lý toán tử không được hỗ trợ.
            printf("Toán tử không hợp lệ. Vui lòng dùng +, -, * hoặc /.\n"); // Hướng dẫn toán tử hợp lệ.
            return 1; // Kết thúc chương trình với mã báo lỗi.
    }

    return 0; // Kết thúc chương trình thành công.
}

#include <iostream>
#include <algorithm> 
using namespace std;

// Hàm để sắp xếp mảng điểm tăng dần
void sapXepDiemTangDan(float* diem, int soLuongDiem) {
    sort(diem, diem + soLuongDiem); // Sử dụng con trỏ để sắp xếp mảng
}

// Hàm để tính điểm trung bình
float tinhDiemTrungBinh(float* diem, int soLuongDiem) {
    float tong = 0.0;
    for (float* ptr = diem; ptr < diem + soLuongDiem; ++ptr) {
        tong += *ptr; // Sử dụng con trỏ để tính tổng điểm
    }
    return tong / soLuongDiem;
}

int main() {
    int soLuongDiem;
    
    // Nhập số lượng điểm từ người dùng
    do {
        cout << "Nhập số lượng điểm kiểm tra: ";
        cin >> soLuongDiem;
        if (soLuongDiem <= 0) {
            cout << "Số lượng điểm phải lớn hơn 0. Vui lòng nhập lại." << endl;
        }
    } while (soLuongDiem <= 0);
    
    // Khởi tạo mảng động để chứa các điểm kiểm tra
    float* diem = new float[soLuongDiem];
    
    // Nhập các điểm từ người dùng
    for (int i = 0; i < soLuongDiem; ++i) {
        do {
            cout << "Nhập điểm kiểm tra thứ " << i + 1 << ": ";
            cin >> *(diem + i); // Sử dụng con trỏ để nhập điểm
            if (*(diem + i) < 0) {
                cout << "Điểm không được âm. Vui lòng nhập lại." << endl;
            }
        } while (*(diem + i) < 0); // Không chấp nhận điểm âm
    }
    
    // Sắp xếp điểm kiểm tra theo thứ tự tăng dần
    sapXepDiemTangDan(diem, soLuongDiem);
    
    // Tính điểm trung bình
    float diemTrungBinh = tinhDiemTrungBinh(diem, soLuongDiem);
    
    // Hiển thị danh sách điểm đã sắp xếp
    cout << "\nDanh sách điểm đã sắp xếp theo thứ tự tăng dần:\n";
    for (float* ptr = diem; ptr < diem + soLuongDiem; ++ptr) {
        cout << *ptr << " ";
    }
    cout << endl;
    
    // Hiển thị điểm trung bình
    cout << "Điểm trung bình: " << diemTrungBinh << endl;
    
    // Giải phóng bộ nhớ đã cấp phát động
    delete[] diem;
    
    return 0;
}

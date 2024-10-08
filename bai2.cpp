#include <iostream>
#include <algorithm> 
using namespace std;

void sapXepDiemTangDan(float* diem, int soLuongDiem) {
    sort(diem, diem + soLuongDiem); 
}

float tinhDiemTrungBinh(float* diem, int soLuongDiem) {
    float tong = 0.0;
    for (float* ptr = diem; ptr < diem + soLuongDiem; ++ptr) {
        tong += *ptr; 
    }
    return tong / soLuongDiem;
}

int main() {
    int soLuongDiem;
    
    do {
        cout << "Nhập số lượng điểm kiểm tra: ";
        cin >> soLuongDiem;
        if (soLuongDiem <= 0) {
            cout << "Số lượng điểm phải lớn hơn 0. Vui lòng nhập lại." << endl;
        }
    } while (soLuongDiem <= 0);
    
    float* diem = new float[soLuongDiem];

    for (int i = 0; i < soLuongDiem; ++i) {
        do {
            cout << "Nhập điểm kiểm tra thứ " << i + 1 << ": ";
            cin >> *(diem + i); 
            if (*(diem + i) < 0) {
                cout << "Điểm không được âm. Vui lòng nhập lại." << endl;
            }
        } while (*(diem + i) < 0); 
    }
    
    sapXepDiemTangDan(diem, soLuongDiem);

    float diemTrungBinh = tinhDiemTrungBinh(diem, soLuongDiem);

    cout << "\nDanh sách điểm đã sắp xếp theo thứ tự tăng dần:\n";
    for (float* ptr = diem; ptr < diem + soLuongDiem; ++ptr) {
        cout << *ptr << " ";
    }
    cout << endl;

    cout << "Điểm trung bình: " << diemTrungBinh << endl;

    delete[] diem;
    
    return 0;
}

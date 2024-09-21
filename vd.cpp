#include<iostream>
#include<iomanip>
using namespace std;
struct PayRoll
{
int empNumber; // Số nhân viên
string name; // Tên nhân viên
double hours; // Số giờ làm việc
double payRate; // Mức lương theo giờ
double grossPay; // Tổng lương
};
int main()
{
PayRoll employee; // employee là một cấu trúc PayRoll.
// Nhập số nhân viên


cout << "Nhập số nhân viên: ";
cin >> employee.empNumber;
// Nhập tên nhân viên
cout << "Nhập tên nhân viên: ";
cin.ignore(); // Để loại bỏ ký tự xuống dòng
getline(cin, employee.name);
// Nhập số giờ làm việc của nhân viên
cout << "Nhân viên đã làm việc bao nhiêu giờ? ";
cin >> employee.hours;
// Nhập mức lương theo giờ của nhân viên
cout << "Mức lương theo giờ của nhân viên là bao nhiêu? ";
cin >> employee.payRate;
// Tính tổng lương của nhân viên
employee.grossPay = employee.hours * employee.payRate;
// Hiển thị thông tin nhân viên
cout << "Đây là thông tin lương của nhân viên:\n";
cout << "Tên: " << employee.name << endl;
cout << "Số: " << employee.empNumber << endl;
cout << "Số giờ làm việc: " << employee.hours << endl;
cout << "Mức lương theo giờ: " << employee.payRate << endl;
cout << fixed << showpoint << setprecision(2);
cout << "Tổng lương: $" << employee.grossPay << endl;
return 0;
}
#include<iostream>
#include<iomanip>
using namespace std;
struct PayRoll
{
int empNumber; 
string name; 
double hours; 
double payRate; 
double grossPay; 
};
int main()
{
PayRoll employee; 
cout << "Nhập số nhân viên: ";
cin >> employee.empNumber;
cout << "Nhập tên nhân viên: ";
cin.ignore(); 
getline(cin, employee.name);
cout << "Nhân viên đã làm việc bao nhiêu giờ? ";
cin >> employee.hours;
cout << "Mức lương theo giờ của nhân viên là bao nhiêu? ";
cin >> employee.payRate;
employee.grossPay = employee.hours * employee.payRate;
cout << "Đây là thông tin lương của nhân viên:\n";
cout << "Tên: " << employee.name << endl;
cout << "Số: " << employee.empNumber << endl;
cout << "Số giờ làm việc: " << employee.hours << endl;
cout << "Mức lương theo giờ: " << employee.payRate << endl;
cout << fixed << showpoint << setprecision(2);
cout << "Tổng lương: $" << employee.grossPay << endl;
return 0;
}
#include <iostream>
using namespace std;
int main() 
{
    int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout << "Kích thước của mảng: " << sizeof(arr) << " byte\n";
    for (int i = 0; i < 10; ++i) {
        cout << "Phần tử arr[" << i << "] = " << arr[i];
        cout << ", địa chỉ: " << &arr[i] << "\n";
    }

    return 0;
}


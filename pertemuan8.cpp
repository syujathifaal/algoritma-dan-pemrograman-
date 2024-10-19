#include<iostream>
using namespace std;

int main() {
    int a, b, c;
    
    // Input tiga nilai
    cout << "Masukkan Nilai ke-1: "; cin >> a;
    cout << "Masukkan Nilai ke-2: "; cin >> b;
    cout << "Masukkan Nilai ke-3: "; cin >> c;

    // Urutan nilai dari yang terkecil
    cout << "\nUrutan Nilai Dari yang Terkecil: ";
    
    if (a < b) {
        if (b < c) {
            cout << a << " " << b << " " << c;
        } else if (a < c) {
            cout << a << " " << c << " " << b;
        } else {
            cout << c << " " << a << " " << b;
        }
    } else {
        if (a < c) {
            cout << b << " " << a << " " << c;
        } else if (b < c) {
            cout << b << " " << c << " " << a;
        } else {
            cout << c << " " << b << " " << a;
        }
    }
    
    cout << endl;
    
    return 0;
}

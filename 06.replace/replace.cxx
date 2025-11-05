#include <iostream>
#include <string>
using namespace std;

int main() {
    string nama1 = "DwiAnanda";
    nama1.replace(0, 3, "Belajar"); // ganti 3 huruf pertama
    cout << "Setelah replace(0,3,'Belajar'): " << nama1 << endl;
    return 0;
}
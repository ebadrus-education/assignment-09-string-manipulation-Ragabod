#include <iostream>
#include <string>
using namespace std;

int main() {
    string nama1 = "DwiAnanda";
    nama1.erase(3, 2); // hapus 2 huruf mulai dari indeks ke-3
    cout << "Setelah erase(3,2): " << nama1 << endl;
    return 0;
}
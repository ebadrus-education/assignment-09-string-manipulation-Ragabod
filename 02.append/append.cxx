#include <iostream>
#include <string>
using namespace std;

int main() {
    string nama1 = "DwiAnanda";
    string gabung = nama1 + " SMK";
    cout << "Hasil gabung: " << gabung << endl;

    // Bisa juga pakai append()
    string nama2 = "Dwi";
    nama2.append(" Ananda");
    cout << "Hasil append: " << nama2 << endl;

    return 0;
}
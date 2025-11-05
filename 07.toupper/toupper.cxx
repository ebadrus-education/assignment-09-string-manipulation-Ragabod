#include <iostream>
#include <cctype> // untuk toupper
using namespace std;

int main() {
    char huruf = 'a';
    cout << (char)toupper(huruf) << endl; // Output: A
    return 0;
}
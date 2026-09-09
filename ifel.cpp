#include <iostream>
using namespace std;


int main() {

    int password;
    cout << "apa pasword nya tuan?" << std::endl;
    cin >> password;

    if (password == 276227) {
        cout << "Selamat datang tuan" << std::endl;
    } else {
        cout << "Password salah tuan" << std::endl;
    }

    return 0;
}
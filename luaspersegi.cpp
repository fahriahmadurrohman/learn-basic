#include <iostream>

int main() {

    int tinggi ; 
    std::cout << "Masukkan panjang tinggi: ";
    std::cin >> tinggi;

    int panjang ;
    std::cout << "Masukkan panjang panjang: ";
    std::cin >> panjang;

    int luas = panjang * tinggi;
    std::cout << "Luas persegi panjang adalah: " << luas << std::endl;
    return 0;
}
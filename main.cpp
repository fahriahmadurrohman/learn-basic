#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int a = 1; //variable
    int b = 2;
    int c = -3;
    int d = b*b - 4*a*c; 
    double akar = sqrt(d); //kalo akar jangan pake int bro, pakee double biar bisa pecahan


    cout << (-b + akar) / (2*a) << endl;
    cout << (-b - akar) / (2*a) << endl;



    return 0;
    
    }
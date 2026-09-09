#include <iostream>
#include <chrono>

using namespace std ;

    int umur(int now, int lahir) {
        return now - lahir;
    }
int main() {
        using namespace std::chrono;
        int lahir;
        cout << "masukan tahun lahir anda: " << endl;
        cin >> lahir;

        auto waktu = chrono::system_clock::now();
        auto hariini = floor<days>(waktu);
        chrono::year_month_day ymd{hariini};
        int now = int(ymd.year());

        int usia = umur(now, lahir);

        if (usia >= 40) {
            cout << "anda tua, usia anda " << usia << endl;
        }else if (usia >= 20) {
            cout << "anda remaja, usia anda " << usia << endl;
        }else {
            cout << "anda bocil, usia anda " << usia << endl;
        }

        return 0;
}
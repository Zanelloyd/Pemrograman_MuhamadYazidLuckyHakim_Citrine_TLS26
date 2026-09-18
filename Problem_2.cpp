#include <iostream>
using namespace std;

int main() {
    char pesan[1000];
    char pesan_akhir[1000];

    cout << "Masukkan pesan: ";
    cin >> pesan;
    
    int nilai_sebelum = 0;
    char huruf_sebelum = '-';

    int i = 0;
    for (i ; pesan[i] != '\0'; ++i) {
        int nilai_saat_ini = pesan[i] - 'A' + 1;
        
        if (i == 0) {
            pesan_akhir[i] = pesan[i];

            cout << pesan[i] << "(" << nilai_saat_ini << ") + 0 = " << pesan_akhir[i] << "(" << nilai_saat_ini << ")\n";
            
            cout << pesan[i];
            nilai_sebelum = nilai_saat_ini;
        } else {
            int nilai_baru = nilai_saat_ini + nilai_sebelum;
            int nilai_akhir = (nilai_baru - 1) % 26 + 1;
            char huruf_baru = 'A' + nilai_akhir - 1;

            pesan_akhir[i] = huruf_baru;

            cout << pesan[i] << "(" << nilai_saat_ini << ") + " << huruf_sebelum << "(" << nilai_sebelum << ") = " << huruf_baru << "(" << nilai_akhir << ")\n";
            
            cout << huruf_baru;
            nilai_sebelum = nilai_saat_ini;
        }
    }
    
    pesan_akhir[i] = '\0'; 
    
    cout << "\nHasil Akhir:\n";
    cout << "Pesan Awal  : " << pesan << '\n';
    cout << "Pesan Akhir : " << pesan_akhir << '\n';
    
    cout << '\n';
    return 0;
}

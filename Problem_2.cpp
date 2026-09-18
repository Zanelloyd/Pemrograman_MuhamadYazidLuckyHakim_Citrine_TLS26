#include <iostream>
using namespace std;

int main() {
    char pesan[1000];
    cin >> pesan;

    int nilai_sebelum = 0;
    
    for (int i = 0; pesan[i] != '\0'; ++i) {
        int nilai_semasa = pesan[i] - 'A' + 1;
        
        if (i == 0) {
            cout << pesan[i];
            nilai_sebelum = nilai_semasa;
        } else {
            int nilai_baru = nilai_semasa + nilai_sebelum;
            int nilai_akhir = (nilai_baru - 1) % 26 + 1;
            char aksara_baru = 'A' + nilai_akhir - 1;
            
            cout << aksara_baru;
            nilai_sebelum = nilai_semasa;
        }
    }
    
  cout << '\n';
    return 0;
}

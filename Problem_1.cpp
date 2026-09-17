#include <iostream>
using namespace std;

int main(){
    int N, K;
    cout << "Masukkan jumlah Astronot: ";
    cin >> N;
    cout << "Masukkan K: ";
    cin >> K;
    cout << "\n";
    bool astronot[N];
    
    for(int i = 0; i < N; i++){
        astronot[i]=true;
    }
    
    int urutan_eliminasi = 1;
    int sisa = N;
    int nomor = 0;
    int hitung = 0;

     while(sisa > 1){
        if(astronot[nomor] == true){
            hitung ++;
            if(hitung % K == 0){
                astronot[nomor] = false;
                sisa--;
                
                cout << "Urutan ke-" << urutan_eliminasi << endl << ", astronot bernomor\t: " << nomor << endl;
                
                if(nomor % 2 == 0){
                    K += 2;
                } else {
                    K --;
                }
                hitung = 0;
                cout << "K sekarang adalah\t: " << K << endl;
                urutan_eliminasi ++;
            }
        }
        
        nomor = nomor + 1;
        if(nomor > N){
            nomor = 1;
        }
    }
    return 0;
}

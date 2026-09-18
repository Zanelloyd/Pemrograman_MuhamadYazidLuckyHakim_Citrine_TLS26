#include <iostream>
using namespace std;

int main(){
    int N, K;
   while(true){
        cout << "Masukkan jumlah Astronot: ";
        cin >> N;
        cout << "Masukkan K: ";
        cin >> K;
        cout << "\n";

        if(N <= 0 || K <= 0){
            cout << "N atau K harus lebih dari 0!" << endl;
        }else{
            break;
        }
    }
    
    N++;
    bool astronot[N];
    
    for(int i = 0; i < N; i++){
        astronot[i]=true;
    }
    
    int urutan_eliminasi = 1;
    int nomor = 1;
    int hitung = 0;

     while(urutan_eliminasi < N - 1){
        if(astronot[nomor] == true){
            hitung ++;
            
            if(hitung % K == 0){
                astronot[nomor] = false;
                
                cout << "Urutan ke-" << urutan_eliminasi << "\nAstronot yang tereliminasi adalah nomor\t: " << nomor << endl;
                
                if(nomor % 2 == 0){
                    K += 2;
                } else {
                    K --;
                }
                if(K < 2){
                    K = 2;
                }
                hitung = 0;
                cout << "K sekarang adalah\t\t\t: " << K << "\n\n" << endl;
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

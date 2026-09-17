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
    
    int putaran_ke = 1;
    int sisa = N;
    int nomor = 0;

     while(sisa > 1){
        if(astronot[nomor] == true){
            if(nomor % K == 0){
                astronot[nomor] = false;
                sisa--;
                
                cout << "Putaran ke-" << putaran_ke << endl << ", astronot bernomor\t: " << nomor << endl;
                
                if(nomor % 2 == 0){
                    K += 2;
                } else {
                    K --;
                }
                cout << "K sekarang adalah\t\t\t: " << K << endl;
                putaran_ke ++;
            }
        }
        
        nomor = nomor + 1;
        if(nomor > N){
            nomor = 1;
        }
    }
    return 0;
}

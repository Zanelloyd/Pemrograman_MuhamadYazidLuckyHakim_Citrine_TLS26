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
    while(true){
        if(i = K){
            astronot[i] = false;
            cout << "Putaran ke-" << putaran_ke << ",\nAstronot yang tereliminasi bernomor\t: " << i << endl;
            if(i % 2 == 0){
                K += 2;
            } else {
                K--;
            }
            cout << "K sekarang adalah\t\t\t: " << K << "\n\n";
            putaran_ke ++;
        }
        return 0;
    }
}
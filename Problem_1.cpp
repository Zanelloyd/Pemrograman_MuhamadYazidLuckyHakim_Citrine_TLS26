#include <iostream>
using namespace std;

int main(){
    int N, K;
    cout << "Masukkan jumlah Astronot: ";
    cin >> N;
    cout << "Masukkan K: ";
    cin >> K;
    bool astronot[N];
    for(int i = 0; i < N; i++){
        astronot[i]=true;
    }
    for(int i = 0; i < N; i++){
        if(i % K == 0){
        astronot[i] = false;
        cout << "Astronot yang tereliminasi bernomor\t: " << i <<endl;
    }
    }
    return 0;
}
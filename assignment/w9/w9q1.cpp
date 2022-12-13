#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n, max=0;
    cin >> n;
    int num[n];
    for(int i=0; i<n; i++){
        cin >> num[i];
        if(num[i] > max){
            max = num[i];
        }
    }
    bool primeList[max+1];
    for(int i=0; i<=max; i++){
        primeList[i] = true;
    }
    primeList[0] = false;
    primeList[1] = false;
    for(int i=2; i<=max; i++){
        for(int j=2; j<=sqrt(i); j++){
            if(primeList[j]){
                if(i%j == 0){
                    primeList[i] = false;
                }
            }
        }
    }
    for(int i=0; i<n; i++){
        if(primeList[num[i]]){
            cout << "yes" << endl;
        }
        else{
            cout << "no" << endl;
        }
    }
    return 0;
}

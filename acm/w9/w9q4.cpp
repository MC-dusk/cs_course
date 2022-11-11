#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int m, absMax=0;
    cin >> m;
    int num[m];
    for(int i=0; i<m; i++){
        cin >> num[i];
        if( abs(num[i]) > abs(absMax) ){
            absMax = num[i];
        }
    }
    cout << absMax << endl;
    return 0;
}
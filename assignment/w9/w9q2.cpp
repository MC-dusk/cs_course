#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int T;
    cin >> T;
    int m[T], n[T];
    for(int i=0; i<T; i++){
        cin >> m[i] >> n[i];
    }
    bool flowerNum[1001] = {false};
    // for(int i=0; i<1001; i++){
    //     flowerNum[i] = false;
    // }
    for(int i=100; i<1000; i++){
        int a, b, c, sum;
        a = i%10;
        b = (i/10)%10;
        c = (i/100)%10;
        sum = pow(a,3) + pow(b,3) + pow(c,3);
        if(sum == i){
            flowerNum[i] = true;
        }
    }
    for(int i=0; i<T; i++){
        bool flag = false;
        for(int j=m[i]; j<=n[i]; j++){
            if(flowerNum[j]){
                cout << j << " ";
                flag = true;
            }
        }
        if(!flag){
            cout << "-1";
        }
        cout << endl;
    }
    return 0;
}

#include <iostream>
using namespace std;

int main(){
    int a, n, sum=0;
    cin >> a >> n;
    int base[n];
    base[0] = a;
    for(int i=0; i<n; i++){
        base[i+1] = base[i] * 10;
    }
    // base[0] * n, base[n-1] * 1
    for(int i=0; i<n; i++){
        sum += base[i] * (n-i);
    }
    cout << sum << endl;
    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    //initialize
    int n, k, m;
    cin >> n >> k >> m;
    const int remain = 2;
    bool list[n];
    for (int i = 0; i < n; i++){
        list[i] = true;
    }
    //operate
    for (int survivor = n, pos = k-2; survivor > remain; survivor--){
        for (int counter = m; counter > 0; ){
            ++pos;
            if (pos > n-1)
                pos = 0;
            if (list[pos])
                counter--;
        }
        list[pos] = false;
    }
    //output
    for (int i = 0, j = 0; i < n; i++){
        if (list[i]){
            cout << i+1 << " ";
            ++j;
        }
        if (j == remain){
            break;
        }
    }
    return 0;
}
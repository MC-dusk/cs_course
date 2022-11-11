#include <iostream>
using namespace std;

int main()
{
    int n, k, m;
    bool *p;
    cin >> n >> k >> m;
    int survive = n;
    p = new bool[n + 1];
    for (int i = 0; i < n + 1; i++){
        p[i] = true;
    }
    int pos = k-1;
    while (survive > 2){
        int cnt = m;
        while (cnt){
            pos++;
            if (pos > n)
                pos = 1;
            if (p[pos])
                cnt--;
        }
        p[pos] = false;
        survive--;
    }
    for (int i = 1; i < n + 1; i++){
        if (p[i]){
            cout << i << " ";
        }
    }
    delete[] p;
    return 0;
}
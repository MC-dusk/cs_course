#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int x, diffnum[n]={0}, p=0;
    for (int i = 0; i < n; i++)
    {
        int diff=0;
        cin >> x;
        for (int j = 0; j < p; j++)
        {
            if (x != diffnum[j])
            {
                diff++;
            }
        }
        if (diff == p)
        {
            diffnum[p++] = x;
        }
    }
    cout << p << endl;
    return 0;
}
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int x, diffnum[n]={0}, p=0;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        int j;
        for (j = 0; j < p; j++)
        {
            if (x == diffnum[j]) break;
        }
        (j == p) && (diffnum[p++] = x); // if j!=p, it will just continue and not operate the diffnum
    }
    cout << p << endl;
    return 0;
}
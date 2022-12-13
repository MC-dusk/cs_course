#include <iostream>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    unsigned long long int mt[k][n][n]={0};
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            cin >> mt[0][i][j];
        }
    }
    for (size_t m = 0; m < k-1; m++)
    {
        for (size_t i = 0; i < n; i++)
        {
            for (size_t j = 0; j < n; j++)
            {
                for (size_t l = 0; l < n; l++)
                {
                    mt[m+1][i][j] += mt[m][i][l] * mt[m][l][j];
                }
            }
        }
    }
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            cout << mt[k-1][i][j];
            (i < (n-1)) ? (cout << ' ') : (cout << '\n');
        }
    }
    return 0;
}
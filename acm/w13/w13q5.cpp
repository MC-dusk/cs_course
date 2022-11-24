#include <iostream>
using namespace std;

int main(){
    int M, n=0;
    cin >> M;
    char sentence[50][20]={0};
    // while (scanf("%s", sentence[n]) != EOF)
    // while (cin >> sentence[n])
    while (scanf("%s", sentence[n++]) && getchar()==' ')
    {
        // n++;
        // cin >> sentence[n++];
        // in = sentence[n-1][0];
    }
    // cin.get(input);
    if (M > n)
    {
        cout << "error" << endl;
        return 0;
    }
    for (int i = 0; i < M; i++)
    {
        cout << sentence[n-M+i] << ' ';
    }
    cout << sentence[0];
    for (int i = 1; i < n-M; i++)
    {
        cout << ' ' << sentence[i];
    }
    cout << endl;
    return 0;
}
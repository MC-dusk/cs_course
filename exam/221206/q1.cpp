#include <iostream>
using namespace std;

int main()
{
    int N=0, out=99999999;
    cin >> N;
    int num[N];
    for (int i = 0; i < N; i++)
    {
        cin >> num[i];
        if ( (num[i] % 3 == 0) && (num[i] < out) )
        {
            out = num[i];
        }
    }
    if (out == 99999999)
    {
        cout << "Null" << endl;
        return 0;
    }
    cout << out << endl;
    return 0;
}
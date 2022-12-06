#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int num[n];
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (num[i] < 10)
        {
            cout << "no" << endl;
            continue;
        }
        int q = num[i], r[10]={0}, j=0, diff=0;
        while ( q != 0 )
        {
            r[j++] = q % 10;
            q /= 10;
        }
        int r2[j]={0};
        for (int k = 0; k < j; k++)
        {
            r2[k] = r[j-1-k];
        }
        for (int k = 0; k < j; k++)
        {
            if (r2[k] != r[k])
            {
                diff++;
            }
            if (diff > 2)
            {
                break;
            }
        }
        if (diff > 2 || diff < 1)
        {
            cout << "no" << endl;
            continue;
        }
        cout << "yes" << endl;
    }
    return 0;
}

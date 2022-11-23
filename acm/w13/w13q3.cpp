#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int numList[n][5];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> numList[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        int posi=0, nega=0, zero=0;
        for (int j = 0; j < 5; j++)
        {
            if (numList[i][j]>0)
            {
                posi++;
            }
            else if (numList[i][j]<0)
            {
                nega++;
            }
            else
            {
                zero++;
            }            
        }
        cout << posi << ' ' << nega << ' ' << zero << endl;
    }
    return 0;
}
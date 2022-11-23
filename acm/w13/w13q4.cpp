#include <iostream>
using namespace std;

void printStar(int x);

int main(){
    int n;
    cin >> n;
    int num[n];
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (num[i] % 2 == 0)
        {
            cout << "error" << endl;
        }
        else
        {
            cout << "print" << endl;
            printStar(num[i]);
        }
    }
    return 0;
}

void printStar(int x){
    char star[x/2+1][x];
    for (int i = 0; i < x/2+1; i++)
    {
        for (int j = 0; j < x; j++)
        {
            if ( (j+1) <= ((x+1)/2+i) && (j+1) >= ((x+1)/2-i) )
            {
                star[i][j] = '*';
            }
            else
            {
                star[i][j] = ' ';
            }
        }
    }
    for (int i = 0; i < x/2; i++)
    {
        cout << star[i] << endl;
    }
    for (int i = x/2; i >= 0; i--)
    {
        cout << star[i] << endl;
    }
}
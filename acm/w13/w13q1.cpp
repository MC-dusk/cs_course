#include <iostream>
using namespace std;

int hw(int x);

int main(){
    int x;
    cin >> x;
    int temp=x, result=hw(x);
    while (result!=0)
    {
        temp = result;
        result = hw(result);
        if (result<0) // overflow, more than 2^31
        {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << temp << endl;
    return 0;
}

int hw(int x){
    int q=x, num[10], i=0, y=0;
    while (q > 0)
    {
        num[i++] = q % 10;
        q /= 10;
    }
    for (int j=0; j<i; j++)
    {
        y *= 10;
        y += num[j];
    }
    if (x == y)
    {
        return 0;
    }
    else
    {
        return x+y;
    }
}
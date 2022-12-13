#include <iostream>
#include <cmath>
using namespace std;

float HaiLun(int x, int y, int z);

int main(){
    int n;
    cin >> n;
    int a[3], b[3], c[3];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i] >> c[i];
    }
    float scale;
    for (int i = 0; i < n; i++)
    {
        scale = HaiLun(a[i],b[i],c[i]);
        if (scale == 0.0f)
        {
            cout << "error" << endl;
        }
        else
        {
            printf("%.2f\n", scale);
        }        
    }
    return 0;
}

float HaiLun(int x, int y, int z){
    float p=(x+y+z)/2.0f;
    if ((p-x<0) || (p-y<0) || (p-z<0))
    {
        return 0.0f;
    }
    return float(sqrt(p * (p-x) * (p-y) * (p-z)));
}
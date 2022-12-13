#include <iostream>
using namespace std;

int main(){
    int x, y, z;
    float a, b, c;
    // cin >> x >> y >> z;
    scanf("%d,%d,%d", &x, &y, &z);
    a = (x + y)/2;
    b = (y + z)/2;
    c = (z + x)/2;
    if(x > a & x > b & x > c){
        cout << "max=" << x << endl;
    }
    if(y > a & y > b & y > c){
        cout << "max=" << y << endl;
    }
    if(z > a & z > b & z > c){
        cout << "max=" << z << endl;
    }
    return 0;
}
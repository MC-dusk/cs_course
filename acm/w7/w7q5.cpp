#include <iostream>
using namespace std;

int main(){
    float x;
    cin >> x;
    if(x < 0){
        x -= 0.5;
    }
    else{
        x += 0.5;
    }
    x = (int) x;
    cout << x;
    return 0;
}
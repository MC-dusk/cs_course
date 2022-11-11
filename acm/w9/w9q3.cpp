#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n], b[n], c[n];
    for(int i=0; i<n; i++){
        cin >> a[i] >> b[i] >> c[i];
    }
    for(int i=0; i<n; i++){
        if( (a[i]<0) || (b[i]<0) || (c[i]<0) ){
            cout << "No" << endl;
            continue;
        }
        if( (a[i]>b[i]) && (a[i]>c[i]) ){
            if( a[i]*a[i] == (b[i]*b[i] + c[i]*c[i]) ){
                cout << "Yes" << endl;
            }
            else{
                cout << "No" << endl;
            }
            continue;
        }
        if( (b[i]>a[i]) && (b[i]>c[i]) ){
            if( b[i]*b[i] == (a[i]*a[i] + c[i]*c[i]) ){
                cout << "Yes" << endl;
            }
            else{
                cout << "No" << endl;
            }
            continue;
        }
        if( (c[i]>a[i]) && (c[i]>b[i]) ){
            if( c[i]*c[i] == (a[i]*a[i] + b[i]*b[i]) ){
                cout << "Yes" << endl;
            }
            else{
                cout << "No" << endl;
            }
            continue;
        }
        if( (a[i]==b[i]) || (b[i]==c[i]) || (c[i]==a[i]) ){
            cout << "No" << endl;
        }
    }
    return 0;
}
#include <iostream>
using namespace std;

void yhTriangle(int x);

int main(){
    int n, num;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> num;
        yhTriangle(num);
    }
    return 0;
}

void yhTriangle(int x){
    int yh[x][x];
    // yh[0][0] = 1;
    // yh[1][0] = 1;
    // yh[1][1] = 1;
    for(int j=0; j<x; j++){
        yh[j][0] = 1;
        yh[j][j] = 1;
        for(int k=1; k<j; k++){
            // yh[2][1] = yh[1][0] + yh[1][1];
            yh[j][k] = yh[j-1][k-1] + yh[j-1][k];
        }
    }
    // cout << "1\n";
    for(int j=0; j<x; j++){
        for(int k=0; k<=j; k++){
            cout << yh[j][k];
            if(k<j){
                cout << " ";
            }
        }
        cout << endl;
    }
}
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin >> n;
    int num[n];
    for(int i=0; i<n; i++){
        cin >> num[i];
    }
    for(int i=0; i<n; i++){
        if(num[i] < 0){
            cout << "ERROR" << endl;
        }
        else{
            printf("%.2f\n", sqrt(num[i]));
        }
    }
    return 0;
}
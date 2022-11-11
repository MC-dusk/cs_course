#include <iostream>
using namespace std;

bool hwNumber(int x);

int main(){
    int n, x;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> x;
        if(hwNumber(x)){
            cout << "Yes\n";
        }
        else{
            cout << "No\n";
        }
    }
    return 0;
}

bool hwNumber(int x){
    int q=x, j=0;
    while(q > 0){
        q = q/10;
        j++;
    }
    int r[j];
    q = x;
    j = 0;
    while(q > 0){
        r[j++] = q % 10;
        q = q/10;
    }
    int sum=0;
    for(int k=0; k<j; k++){
        sum = sum * 10;
        sum += r[k];
    }
    if(sum == x){
        return true;
    }
    else{
        return false;
    }
}
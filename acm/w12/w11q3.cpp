#include <iostream>
using namespace std;

int f(int x);
int factorial(int x);

int main(){
    int k;
	cin >> k;
    int n[k];
    for(int i=0; i<k; i++){
        cin >> n[i];
    }
    for(int i=0; i<k; i++){
        cout << f(n[i])%1000000 << endl;
    }
    return 0;
}

int f(int x){
    int sum=0;
    for(int i=1; i<=x; i++){
        sum += factorial(i)%1000000;
    }
    return sum;
}

int factorial(int x){
    int pro=1;
    for(int i=2; i<=x; i++){
        pro *= i;
    }
    return pro;
}
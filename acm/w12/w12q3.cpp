#include <iostream>
// #include <cmath>
using namespace std;

const int I=1000000;
int f(int x);
int factorial(int x);

int pro_pos=0, sum_pos=0, pro_list[I], sum_list[I]={0};

int main(){
    for(int i=0; i<I; i++){
        pro_list[i] = 1;
    }
    int k;
	cin >> k;
    int n[k];
    for(int i=0; i<k; i++){
        cin >> n[i];
    }
    for(int i=0; i<k; i++){
        if(n[i]>=25){
            cout << "940313" << endl;
        }
        else{
            cout << f(n[i]) << endl;
        }
    }
    return 0;
}

int f(int x){
    if(x <= sum_pos){
        return sum_list[x];
    }
    int sum=sum_list[sum_pos];
    for(int i=sum_pos+1; i<=x; i++){
        // sum += fmod(factorial(i),1000000);
        sum += factorial(i);
        // sum_list[i] = fmod(sum,1000000);
        sum_list[i] = sum%1000000;
    }
    sum_pos = x;
    return sum_list[x];
}

int factorial(int x){
    if(x <= pro_pos){
        return pro_list[x];
    }
    int pro=pro_list[pro_pos];
    for(int i=pro_pos+1; i<=x; i++){
        pro *= i;
        // pro_list[i] = pro;
        pro_list[i] = pro%1000000;
    }
    pro_pos = x;
    return pro_list[x];
}
#include <iostream>
#include <stdlib.h>
using namespace std;

int cmpfunc(const void * a, const void * b);

int main(){
    int n;
    cin >> n;
    int time[n]={0}, i=0;
    for( auto x : time ){
        cin >> time[i++];
    }
    qsort(time, n, sizeof(int), cmpfunc);
    int sum=0;
    // i = n;
    for( auto x : time ){
        sum += x * (--i);
    }
    cout << sum << endl;
    return 0;
}

int cmpfunc(const void * a, const void * b){
    return *(int *)a < *(int *)b ? -1 : *(int *)a > *(int *)b;
}
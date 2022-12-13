#include <iostream>
#include <stdlib.h>
using namespace std;

int cmpfunc(const void * a, const void * b);

int main(){
    int in, statistic[26]={0}, K=0;
    while( 1 ){
        in = getchar();
        if( in == '\n' ){
            break;
        }
        // 'a' = 97
        statistic[in-97]++;
    }
    qsort(statistic, 26, sizeof(int), cmpfunc);
    for(int i=0; i<26; i++){
        K += statistic[i] * (i+1);
    }
    cout << K << endl;
    return 0;
}

int cmpfunc(const void * a, const void * b){
    return *(int *)a < *(int *)b ? -1 : *(int *)a > *(int *)b;
}
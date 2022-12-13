#include <iostream>
using namespace std;

int main(){
    int m, n;
    cin >> m >> n;
    int a[m], b[n], c[m+n]={0};
    for(int i=0; i<m; i++){
        cin >> a[i];
        c[i] = a[i];
    }
    int p=m-1;
    for(int i=0; i<n; i++){
        cin >> b[i];
        int j=p;
        while(b[i]<c[j]){
            j--;
        }
        for(int k=p; k>j; k--){
            c[k+1] = c[k];
        }
        c[j+1] = b[i];
        p++;
    }
    for(int i=0; i<m+n; i++){
        cout << c[i] << ' ';
    }
    cout << endl;
    return 0;
}
#include <iostream>
using namespace std;

bool ugly(int x);

int main(){
    int n;
    cin >> n;
    int list[n];
    for(int i=0; i<n; i++){
        cin >> list[i];
    }
    for(int i=0; i<n; i++){
        if(ugly(list[i])){
            cout << "true";
        }
        else{
            cout << "false";
        }
        cout << endl;
    }
    return 0;
}

bool ugly(int x){
    if(x <= 0){
        return false;
    }
    while(x%2 == 0){
 	 	x /= 2;
    }
    while(x%3 == 0){
        x /= 3;
    }
    while(x%5 == 0){
        x /= 5;
    }
    if(x != 1){
        return false;
    }
    else{
        return true;
    }
}
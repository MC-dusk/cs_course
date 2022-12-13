#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int list[n];
    for(auto &x : list){
        cin >> x;
    }
    string table[9][9];
    int i=1;
    for(auto &row : table){
        int j=1;
        for(auto &column : row){
            stringstream ss;
            ss << i << '*' << j << '=' << i * j;
            column = ss.str();
            if(++j > i){
                break;
            }
        }
        i++;
    }
    for(const auto &x : list){
        for(int i=0; i<x; i++){
            for(int j=0; j<x; j++){
                cout << table[i][j] << ' ';
            }
            cout << endl;
        }
    }
    return 0;
}
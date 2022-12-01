#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    char list[n];
    for(auto &ch : list){
        cin >> ch;
    }
    for(const auto &ch : list){
        if(ch >= 'a' && ch <= 'z'){
            printf("%c\n", ch-'a'+'A');
            // cout << ch-'a'+'A' << endl;
        }
        else{
            cout << ch << endl;
        }
    }
    return 0;
}
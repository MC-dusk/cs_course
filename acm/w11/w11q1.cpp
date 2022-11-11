#include <iostream>
#include <cstring>
// #include <string>
using namespace std;

int main(){
    char str[100];
    // string str;
    // scanf("%s", str);
    cin.getline(str,100);
    cout << strlen(str) << endl;
    // cout << str.size() << endl;
    return 0;
}
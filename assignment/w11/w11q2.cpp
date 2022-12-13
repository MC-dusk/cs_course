#include <iostream>
#include <cstring>
using namespace std;

int main(){
    // if not initialize char list, unexpected bug will occur, diff compiler will output diff
    char buff[1000], sentence[50][20]={0};
    cin.getline(buff,1000);
    int i=0, n=0, k=0;
    while(buff[i] != '\0'){
        sentence[n][k++] = buff[i++];
        if(buff[i] == ' '){
            k = 0;
            n++;
            while(buff[i] == ' '){
                sentence[n][k++] = buff[i++];
            }
            k = 0;
            n++;
        }
    }
    n++;
    // buff, n, i won't change after here
    for(int j=0; j<n; j++){
        int l=0;
        char punk[10]={0};
        for(int k=strlen(sentence[j]); k>0; k--){
            if(sentence[j][k-1] >= 'A' && sentence[j][k-1] <= 'z'){
                cout << sentence[j][k-1];
            }
            else{
                punk[l++] = sentence[j][k-1];
            }
        }
        for(int m=l; m>0; m--){
            cout << punk[m-1];
        }
        // cout << ' ';
    }
    cout << endl;
    return 0;
}
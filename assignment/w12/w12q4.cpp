#include <iostream>
#include <string>
using namespace std;

int main(){
    string x;
    int N, sum=0;
	cin >> N;
    int n=N;
    for(int i=0; i<N; i++){
        cin >> x;
        if(x == "n/a"){
            n--;
        }
        else{
            sum += stoi(x);
        }
    }
    if(n == 0){
        cout << "n/a" << endl;
    }
    else{
        printf("%.2f\n", float(sum)/n);
    }
    return 0;
}
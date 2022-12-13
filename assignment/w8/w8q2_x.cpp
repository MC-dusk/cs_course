#include <iostream>
using namespace std;

int main(){
    int i, j, n, a, b, c;
    float avg, max_grade;
    char id[20], max_id[20];
    max_grade = 0;
    cin >> n;
    for(i = 0; i < n; ++i){
    cin >> id >> a >> b >> c;
    avg = (a+b+c)/3.0;
    if(avg > max_grade){
    for(j = 0; j < 20; ++j){
    max_id[j] = id[j];}
    max_grade= avg;}
    cout.precision(4);
    cout << avg << endl;}
    cout << max_id << " " << max_grade << endl;
    return 0;
}
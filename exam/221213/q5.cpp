#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int w, n;
    cin >> w >> n;
    int num[n];
    for (size_t i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    if (w%2 == 0)
    {
        cout << "ERROR" << endl;
        return 0;
    }
    int sorted_num[n];
    memcpy(sorted_num, num, n*sizeof(int));
    for (size_t i = 0; i < (n-w+1); i++)
    {
        int sort_num[n];
        memcpy(sort_num, num, n*sizeof(int));
        sort(sort_num+i, sort_num+w+i);
        sorted_num[i+w/2] = sort_num[i+w/2];
    }
    for (size_t i = 0; i < n; i++)
    {
        cout << sorted_num[i];
        (i < (n-1)) ? (cout << ' ') : (cout << '\n');
    }
    return 0;
}
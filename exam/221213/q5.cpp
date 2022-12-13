#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int w, n;
    cin >> w >> n;
    if (w%2==0)
    {
        cout << "ERROR" << endl;
        return 0;
    }
    
    int num[n];
    for (size_t i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    int sorted_num[n];
    for (size_t j = 0; j < n; j++)
    {
        sorted_num[j] = num[j];
    }
    for (size_t i = 0; i < (n-w+1); i++)
    {
        int sort_num[n];
        for (size_t j = 0; j < n; j++)
        {
            sort_num[j] = num[j];
        }
        sort(sort_num, sort_num+w);
        sorted_num[i+w/2] = sort_num[i+w/2];
    }
    for (size_t i = 0; i < n; i++)
    {
        cout << sorted_num[i];
        if (i < (n-1))
        {
            cout << ' ';
        }
        else
        {
            cout << '\n';
        }
    }
    return 0;
}
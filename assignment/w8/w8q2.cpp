#include <iostream>
using namespace std;

int main(){
    const int scale = 10;
    int i, j=0, n, x, y, z, pos[scale];
    float avg, max=0, grade[scale];
    char name[scale][scale];
    cin >> n;
    for(i=0; i<n; ++i){
        scanf("%s %d %d %d", name[i], &x, &y, &z);
        avg = (x+y+z)/3.0;
        grade[i] = avg;
        if(avg > max){
            max = avg;
        }
    }
    for(i=0; i<n; ++i){
        if(grade[i] == max){
            pos[j++] = i;
        }
    }
    for(i=0; i<n; ++i){
        printf("%.2f\n", grade[i]);
    }
    for(i=0; i<j; ++i){
        printf("%s %.2f\n", name[pos[i]], max);
    }
    return 0;
}
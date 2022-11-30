#include <iostream>
#include <cstring>
using namespace std;

int main(){
    int n;
    cin >> n;
    int list[n][3]={0};
    for(int i=0; i<n; i++){
        cin >> list[i][0] >> list[i][1] >> list[i][2];
    }
    int a, b, q[1000], r, res[1000]={0}, j=0;
    for(int i=0; i<n; i++){
        a = list[i][0];
        b = list[i][1];
        while( 1 ){
            q[j++] = a / b;
            r = a % b;
            while( a<b ){
                a *= 10;
            }
            if( res[r] != 0 ){
                break;
            }
            res[r] = j;
        }
        char buff[3]={0}, loop[1000]={0}, output[list[i][2]], input[1000];


        cout << q[0] << '.';
        // output q[1]~q[ res[r]-2 ]
        for(int k=1; k<(res[r]-1); k++){
            sprintf(buff, "%d", q[k]);
            strcat(output,buff);
        }
        cout << output;
        // print loop
        for(int k=res[r]-1; k<j; k++){
            sprintf(buff, "%d", q[k]);
            strcat(loop,buff);
        }
        strcpy(input,loop);
        while( strlen(output) + strlen(input) < list[i][2] ){
            strcat(input,loop);
        }
        strncpy(output,input,list[i][2]);
        cout << output << endl;

        // cout << output << endl;
        // printf("%.*Lf\n", list[i][2], t);
        // printf("%.*Lf\n", list[i][2], t);
    }
    return 0;
}
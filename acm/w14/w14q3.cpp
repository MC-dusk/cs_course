#include <iostream>
#include <cstring>
using namespace std;

int main(){
    // input
    int n, m;
    cin >> n;
    int list[n][3]={0};
    for(int i=0; i<n; i++){
        cin >> list[i][0] >> list[i][1] >> list[i][2];
    }

    // output
    m = n;
    for(int i=0; i<m; i++){
        int j=0, a, b, c, q[1000]={0}, r, res[1000]={0};
        a = list[i][0];
        b = list[i][1];
        c = list[i][2];
        while( 1 ){
            q[j++] = a / b;
            r = a % b;
            if( (a=r) == 0){
                q[j] = 0;
                res[r] = j++;
                break;
            }
            // while( a<b ){
                a *= 10;
            // }
            if( res[r] != 0 ){
                break;
            }
            res[r] = j;
        }
        char buff[1], loop[1000]={0}, output[c+1]={0}, input[1000]={0};

        // print
        cout << q[0] << '.';
        // print q[1] ~ q[ res[r]-2 ]
        for(int k=1; k<res[r]; k++){
            sprintf(buff, "%d", q[k]);
            strcat(output,buff);
            if(strlen(output)>=c){
                break;
            }
        }
        cout << output;
        if(strlen(output)>=c){
            continue;
        }
        // print loop
        for(int k=res[r]; k<j; k++){
            sprintf(buff, "%d", q[k]);
            strcat(loop,buff);
        }
        int lenBeforeLoop = strlen(output);
        while( lenBeforeLoop + strlen(input) < c ){
            strcat(input,loop);
        }
        strncpy(output,input,c-lenBeforeLoop);
        output[strlen(output)] = '\0';
        cout << output << endl;

        // cout << output << endl;
        // printf("%.*Lf\n", c, t);
    }
    return 0;
}
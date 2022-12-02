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
    // if "i<n" in for(), n will become 0 after once, ?
    // m = n;
    for(int i=0; i<n; i++){
        int j=0, a, b, c, q[1000]={0}, r, res[1000]={0};
        a = list[i][0];
        b = list[i][1];
        c = list[i][2];
        while( 1 ){
            q[j++] = a / b;
            r = a % b;
            if( r == 0 ){
                res[r] = j;
                q[j++] = 0;
                break;
            }
            a = r;
            a *= 10;
            if( res[r] != 0 ){
                break;
            }
            res[r] = j;
        }

        // print int and dot
        // if char buff[1], linux g++ will go wrong, ?
        char buff[2], loop[1000]={0}, output[c+1]={0}, input[1000]={0};
        cout << q[0] << '.';
        // print noloop frac: q[1] ~ q[res[r]-2]
        for(int k=1; k<res[r]; k++){
            sprintf(buff, "%d", q[k]);
            strcat(output,buff);
            if(strlen(output)>=c){
                break;
            }
        }
        cout << output;
        // end print for length limit
        if(strlen(output)>=c){
            continue;
        }
        // print loop frac
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

        // if c < 20, just code below is fine
        // printf("%.*Lf\n", c, (long double)a/b);
    }
    return 0;
}
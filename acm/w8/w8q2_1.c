#include <stdio.h>

int main(){
    int n, i, sum, score[3];
    float avg[3];
    char id[10];
    scanf("%d", &n);
    for(i=0; i<n; ++i){
        scanf("%s", id);
        sum = 0;
        for(int j=0; j<3; ++j){
            scanf("%d", &score[j]);
            sum += score[j];
            avg[i] = sum/3.0;
        }
    }
    for(i=0; i<n; ++i){
        printf("%.2f\n", avg[i]);
    }
    return 0;
}
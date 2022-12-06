#include<stdio.h>

int main(){
    unsigned long ulsum = 0;
    unsigned long ulcount = 5;
    while(0 <= ulcount){
        ulsum += ulcount;
        ulcount--;
    }
    //无符号数，0--会溢出，无限循环
    printf("%lu\n", ulsum);
    return 0;
}
#include <stdio.h>

int main(){
	char a[1000]={0},b[50];
	int d=0,j=0;
	// gets(a);
    // acm云平台linux系统，不支持gets函数，换用fgets，同时结尾从'\0'变成'\n'
	fgets(a,1000,stdin);
	for(int i=0;i<1000;i++){
		if((a[i]>='A'&&a[i]<='Z')||(a[i]>='a'&&a[i]<='z')){
			b[j]=a[i];
			j++;
		}
		else{
			if(a[i]=='\0') d++;
//			if(a==0) break;
			for(int c=j-1;c>=0;c--){
				printf("%c",b[c]);
				j=0;
			}printf("%c",a[i]);
		}
		if(d==2){
			// printf("\n");
			break;
		}
	}
	return 0;
}
#include <iostream>
// using namespace std;

int main(){
	char a[300]={0},b[30]={0};
	int c,i=0,j=0;
	std::cin.get(a,300);
	for(;i<300;i++){
		if((a[i]>='A'&&a[i]<='Z')||(a[i]>='a'&&a[i]<='z')){
			b[j]=a[i];
			j++;
		}
		else{
			for(c=j-1;c>=0;c--){
				printf("%c",b[c]);
			}
			if(a[i]=='\0') break;
			j=0;
			printf("%c",a[i]);
		}
	}
	return 0;
}
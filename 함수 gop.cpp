#include<stdio.h>
int bdc(int s){
	int gop = 1;
	for(int i; i<s; i++){
		gop *= s;
	}
	return gop;
}

int main(){
	int c;
	scanf("%d", &c);
	printf("%d", bdc(c));
	return 0;
} 

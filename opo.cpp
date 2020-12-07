#include <stdio.h>

int in(int y){
	int i = 0;
	while(1){
		i+=y%10;
		y = y/10;
		if(y==0) break;
	}
	return i;
}

int main(){
	int bdc;
	scanf("%d", &bdc);
	printf("%d", in(bdc));
	return 0;
}

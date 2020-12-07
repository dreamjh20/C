#include <stdio.h>

int Re(int num){
	if(num<=0) return 0;
	else printf("Recursive call! %d\n", num);
	Re(num-1);
}

int main(){
	Re(3);
	printf("%d",Re(3));
	return 0;
}

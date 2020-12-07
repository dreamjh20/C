#include <stdio.h>
 void re(int num){
 	if(num<=0) return;
 	else printf("re call_%d\n ", num);
	re(num-1);
}

int main(){
	re(99999);
	return 0;
}

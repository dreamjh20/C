//#include <stdio.h>
//
//int main(void) {
//	int n, i, a, sum=0;
//	scanf("%d", &a);
//	for(i = 0; sum<a; i++){
//		sum+=i;
//		//printf("%d", sum);
//	}
//	printf("%d", i-1);
//}

#include <stdio.h>

int main(void){
	int num=1, sum=0, bound;
	scanf("%d", &bound);
	while(1){
		sum+=num;
		if(sum>=bound) break;
		num++;
	}
	printf("%d", num);
}

#include <Stdio.h>

int main() {
	int i=0, n;
	float gae, hap;
	printf("몇 개의 정수의 평균을 알고 싶니?  ");
	scanf("%f", &gae);
	while(i<gae){
		scanf("%d", &n);
		hap = hap+n;	
		i++;
	}
	printf("%lf", hap/gae);
	return 0;
}

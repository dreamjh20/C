#include <stdio.h>

int main(void) {
	int a=0,tmp=100000,tmp_2=10000;
	for(int i=0;i<3;i++) {
		scanf("%d",&a);
		if(a<tmp) {
			tmp=a;
		}
	}
	for(int i=0;i<2;i++) {
		scanf("%d",&a);
		if(a<tmp_2) {
			tmp_2=a;
		}
	}
	printf("%d\n",tmp+tmp_2-50);
}

#include <stdio.h>

int main(void){
	int a, b, c;
	scanf("%d %d", &a, &b);
	c = a/10000;
	if(b==1 || b==2) printf("%d", 2013-c-1900);
	else printf("%d", 2013-c-2000);
}
	
	
//	int a, b, c, d, e, f, g;
//	scanf("%d%d%d%d%d%d %d", &a, &b, &c, &d, &e, &f, &g);
//	if((10a+b)>13){
//		printf("%d",2012-(2000+10a+b));
//	}
//	if(10A+b<=13){
//		printf("%d", 2012-(1900+10a+b));
//	}
//}

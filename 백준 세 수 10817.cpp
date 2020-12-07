#include <stdio.h>

int main(void) {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if((a>=b&&c>=a)||(a<=b&&c<=a)) printf("%d", a);
	else if((b>=c&&a>=b)||(b>=a&&c>=b)) printf("%d", b);	
	else printf("%d", c);
}


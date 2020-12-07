#include <stdio.h>
int test_func(int input) {
	for(int i=0;i<input;i++) {
		printf("%d\n",i);
	}
	printf("\n\n---³¡---\n\n");
}
int main(void) {
	for(int j=0;j<10;j++) {
		test_func(j);
	}
}

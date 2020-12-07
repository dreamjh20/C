#include <stdio.h>

int main(){
	char sarr[11] = "It'sString";
	char *sptr;
	sptr = sarr;
	printf("변수 sarr[0]의 %p \n", &sarr[0]);
	printf("변수 sarr의 주소는 %p \n", sarr);
	printf("변수 sarr의 값은 %s \n", sptr);
	printf("변수 sarr의 값은 %p \n", sptr);
	printf("변수 sarr의 주소는 %p\n\n", &sptr);
}

#include <stdio.h>

int main(){
	char sarr[11] = "It'sString";
	char *sptr;
	sptr = sarr;
	printf("���� sarr[0]�� %p \n", &sarr[0]);
	printf("���� sarr�� �ּҴ� %p \n", sarr);
	printf("���� sarr�� ���� %s \n", sptr);
	printf("���� sarr�� ���� %p \n", sptr);
	printf("���� sarr�� �ּҴ� %p\n\n", &sptr);
}

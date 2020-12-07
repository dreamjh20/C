#include <stdio.h>
#include <stdlib.h>

int main(){
	cahr *ptr = (char*)malloc(sizeof(char)*10);\
	ptr[0] = a;
	ptr[1] = b;
	printf("%c ", &ptr[0]);
	printf("%c ", ptr[0]);
	printf("%c ", &ptr[1]);
	printf("%c", ptr[1]);
}

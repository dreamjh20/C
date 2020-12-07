#include <stdio.h>

int main() {
	int a = 10;
	int* b = &a;
	printf("%p ", &a);
	printf("%p", b);
}

//a는 10으로 초기화하고 b를 a의 주소로 초기화해서 
//둘의 주소를 출력해보시오 

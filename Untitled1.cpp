#include <stdio.h>

int main() {
	int a = 10;
	int* b = &a;
	printf("%p ", &a);
	printf("%p", b);
}

//a�� 10���� �ʱ�ȭ�ϰ� b�� a�� �ּҷ� �ʱ�ȭ�ؼ� 
//���� �ּҸ� ����غ��ÿ� 

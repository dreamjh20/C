#include<stdio.h>

int main(){
	int a,b,c,d,e;
	printf("����, ����, ����, ������ ����(����)�� ������� �Է��ϼ���.\n");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    printf("��   ����: ");
    printf("%d\n", a+b+c+d+e); 
    printf("��� ����: "); 
    printf("%0.2lf", (double)(a+b+c+d+e)/5);
}

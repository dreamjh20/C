#include<stdio.h>

int main(){
	int a;
	scanf("%d", &a);
	if(a%4==0) printf("\"4�� ����Դϴ�.\"");
	else if(a%2==0) printf("\"2�� ����Դϴ�.\"");
	else printf("\"4�� �����, 2�� ����� �ƴմϴ�.\"");
}

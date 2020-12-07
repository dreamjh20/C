#include<stdio.h>
void add1(int n){//CBV
	n++;
}
void add2(int *n){//CBR
	(*n)++;
}
int main(){
	int a1=0, a2=0;
	add1(a1);
	add2(&a2);
	printf("%d\t",a1);
	printf("%d",a2);
}

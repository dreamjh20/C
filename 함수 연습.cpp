#include <stdio.h>
int cul(int a, int b){
	return a+b;
	return a-b;
	return a*b;
}
int main(){
	int num1, num2, n, result;
	scanf(%d, &n);
	for(int i=0; i<n; i++){
		scanf("%d %d", &num1, &num2);
		result = cul(num1, num2);
		printf("%d", result)
	}
} 

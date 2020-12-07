#include <stdio.h>
int main(void){
	int i = 1, n, result = 1;
	scanf("%d", &n);
	
	while(i<n+1){
		result = result * i;
		i++;
	}
	printf("%d",result);
}

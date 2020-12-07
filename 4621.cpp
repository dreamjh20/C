#include <stdio.h>

int main(){
	int N, K, i, Y = 0, L = 0;
	scanf("%d %d", &N, &K);
	for(i=0; L<K; i++){
		if(N % i == 0){
		Y=i;
		L++;
		}
	}
	printf("%d", Y);
}

#include <stdio.h>

int main(){
	int r, sum = 0, N, i;
	int arr[7];
	scanf("%d", &N);
	r = N;
	for(i = 0; i < 7; i++){
		if(N % 10 == 0){
			N /= 10;
			continue;
		}
		arr[i] = N % 10;
		N /= 10;
		printf("%d", arr[i]);
	}
	printf("\n");

	N = r;
	for(i = 0; i < 8; i++){
		sum += N % 10;
		N /= 10;
	}
	printf("%d", sum);
	return 0;
}

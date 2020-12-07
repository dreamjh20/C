#include <stdio.h>

int main() {
	int n, i, j, p=1;
	scanf("%d", &n);
	int arr[n][n];
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			arr[i][j] = p;
			p++;
		}
	}
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	//줄단위 주석
	/*...블럭단위 주석...*/
}


#include <stdio.h>

int main() {
	int arr[]={};
	int n, i, j, a=1;
	scanf("%d", &n);
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			arr[i][j]=a;
			a++;
			printf("%d", arr[i][j]);
		}
	printf("\n");
	}
}

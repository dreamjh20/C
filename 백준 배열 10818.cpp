#include <stdio.h>

int main() {
	int arr[100], i, n, s=1000001, b=-1000001;
	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%d", &arr[i]);
		n==arr[i];
		if(arr[i]<s){
			s=arr[i];
		}	
		else if(arr[i]>b){
			b=arr[i];
		}
	}
	printf("%d %d", s, b);
	return 0;
}

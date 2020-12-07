#include <stdio.h>

int main() {
	int arr[2][3]={};
	int q,w;
	
	for(q=0; q<3; q++){
		for(w=0; w<2; w++)
			scanf("%d",&arr[q][w]);
			printf("%d ",arr[q][w]);
		printf("\n");
	}
	
}

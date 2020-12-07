#include <stdio.h>

int main() {
	int score[5];
	int i, sum=0;
	for(i=0; i<5; i++){
		scanf("%d", &score[i]);
		sum+=score[i];
	}
	printf("%d", sum);
}

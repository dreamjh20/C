#include <stdio.h>

int main() {
	char ap[6]="apple";
	int i;
	for(i=4; i>=0; i--){
		scanf("%c", ap[i]);
		printf("%c", ap[i]);
	}
}

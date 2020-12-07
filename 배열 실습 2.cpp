#include <stdio.h>

int main() {
	char name[20];
	scanf("%[^\n]s",name);
	int i;
	for(i=0; i<20; i++){
		if(i%2==1){
			scanf("%c", name[i]);
			printf("%c ", name[i]);
		}
	}
}

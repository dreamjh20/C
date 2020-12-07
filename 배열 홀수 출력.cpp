#include <stdio.h>

int main() {
	char name[20];
	gets(name); 
//	scanf("%[^\n]s",name);
	int i;
	for(i=0; i<21; i++){
		if(i%2==0){
			printf("%c ", name[i]);
		}
	}
}

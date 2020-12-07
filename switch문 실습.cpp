#include <stdio.h>

int main(void) {
	char W;
	scanf("%c", &W);
	switch(W){
		case 'a':
			printf("apple");
			break;
		case 'b':
			printf("best");
			break;
		case 'c':
			printf("carrot");
			break;
		case 'd':
			printf("dust");
			break;
		defult:
			printf("what");				
	}
} 

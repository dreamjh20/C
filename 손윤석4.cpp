#include <stdio.h>
int f(char c){
	switch(c){
		case'+':
			return 1;
			break;
		case'-':
			return 2;
			break;
		case'/':
			return 3;
			break;
		case'*':
			return 4;
			break;	
	}
}
int main(){
	char a;
	scanf("%c", &a);
	printf("%d", f(a)); 
}

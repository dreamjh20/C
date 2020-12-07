#include <stdio.h>

int main(){
	char bdc[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'x'};
	char *ptr = bdc;
	for(int i=0; i<26; i++){
		if(i%2 == 1) printf("%c", *(ptr+i));
	}
	return 0;
}

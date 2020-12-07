#include <stdio.h>

int main() {
	char name[12];
	int i;
	for(i=0; i<12; i++) scanf("%c", &name[i]);
	for(i=0; i<12; i++) printf("%c", name[i]);
}

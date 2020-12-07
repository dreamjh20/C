#include<stdio.h>

int main(){
	int dan, su;
	for(dan=1; dan<10; dan++){
		for(su=1; su<10; su++){
			printf("%2d *%2d = %2d\n",dan,su,dan*su);
		}
	printf("\n");	
	}
}

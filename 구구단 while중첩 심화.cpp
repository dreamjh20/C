#include<stdio.h>

int main(){
	int i = 2;
	while(i<10){
		int j = 2;
		while(j<10){
			printf("%2d *%2d =%2d", i, j, i*j);
			j++;
		}
	i++;	
	printf("\n");
	}
} 

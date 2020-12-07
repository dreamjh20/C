#include<stdio.h>

int main(){
	int i=1;
	while(i<4){
		printf("%d\n",i);
		int j=1;
		while(j<4){
			printf("%d\n",j);
			j++;
		}
		i++;
	}
}

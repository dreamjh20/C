#include<stdio.h>

int main(){
	int i; 
	for(i=1; i<101; i++){
		if(i%3==0||i%4==0) printf("%d\n", i);
	}
}

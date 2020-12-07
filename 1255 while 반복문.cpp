#include<stdio.h>

int main(){
	double a, b, i;
	scanf("%lf %lf", &a, &b);
	i = a;
	while(i<=b){
		printf("%.2f\n",i); 
		i += 0.01;	
	}
}

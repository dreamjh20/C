#include <stdio.h>

int main(){
	int a, b, c, min=0, mid=0, max=0;
	scanf("%d %d %d", &a, &b, &c);
	if(a>b&&a>c){
		max=a;
		if(b>c){
			mid=b;
			min=c;
		}
		else{
			mid=c;
			min=b;
		}
	}
	else if(b>a&&b>c){
		max=b;
		if(a>c){
			mid=a;
			min=c;
		}
		else{
			mid=c;
			min=a;
		}
	}
	else {
		max=c;
		if(b>a){
			mid=b;
			min=a;
		}
		else{
			mid=a;
			min=b;
		}
	}
	printf("%d %d %d", max, mid, min);
	return 0;
} 

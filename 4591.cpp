#include<stdio.h>

int main(){
	int cl[9] = {};
	int max = 0, num = 0, i;
	for(i = 0; i < 9; i++){
		scanf("%d", &cl[i]);
		if(max<cl[i]){
			max = cl[i];
			num = i+1;
		}
	}
	printf("%d\n%d", max, num);
	return 0;
}

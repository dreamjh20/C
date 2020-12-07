#include <stdio.h>
struct bdc{
	int won;
};
int main(){
	int jcw=0, i, bun=0;
	struct bdc dar[5];
	for(i=0; i<=4; i++){
		scanf("%d", &dar[i].won);
		if(dar[i].won > jcw){
			jcw=dar[i].won;
		}
	}
	for(i=0; i<5; i++){
		printf("%d번 저축금액: %d\n", i+1, dar[i].won);			
		if(dar[i].won==jcw) bun=i+1;
	}
	printf("저축왕: %d번 %d원", bun, jcw);
	return 0;	
}


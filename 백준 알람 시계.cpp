#include<stdio.h>

int main(void) {
	int H, M, K, I, R;
	scanf("%d %d", &H, &M);
	K=60*H+M;
//	printf("%d", K);
	K-=45;
	I=K/60;
	R=K%60;
//	printf("%d %d %d",K, I, R);

	if(K<0){
	K+=1440;
	I=K/60;
	R=K%60;
	}
	printf("%d %d", I, R);
	
//	printf("%d %d %d",K, I, R);
//23½Ã°£=1380ºÐ	
//-30->1410
//--40->1420
}

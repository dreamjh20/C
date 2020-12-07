#include <stdio.h>
#include <string.h>

int main(){
	char S1[20], S2[20], S3[20];
	int i;
	scanf("%s", S1);
	int Leng1=strlen(S1)-1;
	
	scanf("%s", S2);
	int Leng2=strlen(S2)-1;
	
	scanf("%s", S3);
	
	if((S1[Leng1]==S2[0])&&(S2[Leng2] == S3[0])) printf("good")	;
	else printf("bad");
	
	return 0;
}

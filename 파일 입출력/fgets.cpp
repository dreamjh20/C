#include <stdio.h>

int main(){
	char str[20]={0,};
	FILE * fp = fopen("hello2.txt","w+");
	fputs("Holla como estas",fp);
	printf("%d ", ftell(fp));
	fflush(fp);
	rewind(fp);
	fgets(str,20,fp);
	puts(str);
	fclose(fp);
}

#include <stdio.h>

int main(){
	char name[20];
	FILE *fp1 = fopen("lip.txt", "r");
	FILE *fp2 = fopen("chul.txt", "w");	
	fscanf(fp1, "%s", name);
	fclose(fp1);
	
	fprintf(fp2, "%s", name);
	fclose(fp2);
//	FILE *fp = fopen("hola.txt","a");
//	fprintf(fp,"%s", "Hola como estas");
}

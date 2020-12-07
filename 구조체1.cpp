#include <stdio.h>
struct dar{
	int hak;
	char name[10];
	int phnum;
	int tname[10];
};

int main(){
	int i;
	struct dar aaa[3];
	for(i=0; i<3; i++){
		scanf("%d", &aaa[i].hak);
		scanf("%s", &aaa[i].name);
		scanf("%d", &aaa[i].phnum);
		scanf("%s", &aaa[i].tname);
	}
	
	for(i=0; i<3; i++){
		printf("%d ", aaa[i].hak);
		printf("%s ", aaa[i].name);
		printf("%d ", aaa[i].phnum);
		printf("%s \n", aaa[i].tname);
	}
	return 0; 
}

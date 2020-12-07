#include <stdio.h>
struct gain{
	int Snum;
	char Sname[10];
	char Pnum[14];
	char Tname[10];
};

int main(){
	int i;
	struct gain bdc[5];
	for(i=0; i<5; i++){
		scanf("%d", &bdc[i].Snum);
		scanf("%s", &bdc[i].Sname);
		scanf("%s", &bdc[i].Pnum);
		scanf("%s", &bdc[i].Tname);
	}
	for(i=0; i<5; i++){
		printf("%d ", bdc[i].Snum);
		printf("%s ", bdc[i].Sname);
		printf("%s ", bdc[i].Pnum);
		printf("%s\n", bdc[i].Tname);
	}
}

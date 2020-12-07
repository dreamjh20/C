#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

typedef struct person {
	char name[20];
	int age;
}ps;

void scanStruct(ps *psArr) {
	scanf("%s %d", psArr->name, &psArr->age);
}

int main() {
	ps psArr[3] = {0, };

	for (int i = 0; i < 3; i++) {
		scanStruct(&psArr[i]);
		printf("%s %d\n", psArr[i].name, psArr[i].age);
	}
}

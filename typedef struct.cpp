#include <stdio.h>
typedef struct person person;
struct person{
	char name[20];
	int age;
};

int main(){
	person ps1 = {"suh", 28};
	printf("%s %d", ps1.name, ps1.age);
}


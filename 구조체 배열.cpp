#include <stdio.h>
struct person{
	char name[20];
	int age;
};

int main(){
	struct person arr[3];
	scanf("%s", arr[0].name);
	printf("%s", arr[0].name);
}

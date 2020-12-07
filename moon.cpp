#include <stdio.h>
#include <string.h>

struct person{
	char name[20];
	int age;
};

int main(){
	struct person arr[3];
	strcpy(arr[0].name,"moon");
	printf("%s", arr[0].name);
}

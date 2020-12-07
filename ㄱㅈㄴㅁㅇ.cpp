#include <stdio.h>
struct person{
	char name[20];
	int age;
};

int main(){
	struct person arr[4];
	scanf("%s", arr[0].name);
	scanf("%d", &arr[0].age);
	printf("%s ", arr[0].name);
	printf("%d ", arr[0].age);
	return 0;
}

#include <stdio.h>

void func(int *ptr);
int main(){
	int list[10] = {0, };
	for(int i = 0; i < 10; i++) printf("%d\n", list[i]);
	return 0;
}
void func (int *ptr){
	for(int i = 0; i < 10; i++) ptr[i] = i;
}

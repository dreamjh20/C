#include <stdio.h>

int main(){
	int hak = 0, arr[4], a;
	printf("학번이 뭐야?  ");
	scanf("%d", &a);
	hak = (a/1000);
	if(hak==1){
		printf("공통과정");
	}
	else if(hak>3){
		printf("정말 그 학년이 맞나요?");
	} 
	else{
		hak = a%1000/100;
		switch(hak){
			case 1:
				printf("개발");
				break;
			case 2:
				printf("개발");	
				break;
			case 3:
				printf("임베");
				break;
			case 4:
				printf("보안");	
				break;
			default:
				printf("정말 그 반이 맞나요?");	
		}
	}
	return 0;
}

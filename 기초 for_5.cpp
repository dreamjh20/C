#include <stdio.h>
#include <windows.h>

int main(){
	int ib;
	
	while(1){ 
	printf("1. 일본\n ");
	printf("2. 미국\n ");
	printf("3. 중국\n ");
	printf("4. 한국\n ");
	printf("5. 끝내기\n ");
	printf("수도를 알고 싶은 나라는? ");
	scanf("%d", &ib);
	if(ib==1){
		printf("도쿄(東京\n");
	}
	else if(ib==2){
		printf("워싱턴 D.C.(華盛頓)\n");
	}
	else if(ib==3){
		printf("베이징 (北京)\n");
	}
	else if(ib==4){
		printf("서울 (漢城)\n");
	}
	else {
	printf("끝낼게요~"); 
	break; 
	}
	}
	return 0;
}

//	system("cls");

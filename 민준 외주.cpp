#include <stdio.h>

int main(){
	int year;
	scanf("%d", &year);
	switch(year%12){
		case 0:
			printf("¿ø¼şÀÌ¶ì");
			break;
		case 1:
			printf("´ß¶ì");
			break;	 
		case 2:
			printf("°³¶ì");
			break; 
		case 3:
			printf("µÅÁö¶ì");
			break;
		case 4:
			printf("Áã¶ì");
			break;		
		case 5:
			printf("¼Ò¶ì");
			break;	
		case 6:
			printf("È£¶ûÀÌ¶ì");
			break;	
		case 7:
			printf("Åä³¢¶ì");
			break;	
		case 8:
			printf("¿ë¶ì");
			break;	
		case 9:
			printf("¹ì¶ì");
			break;	
		case 10:
			printf("¸»¶ì");
			break;	
		case 11:
			printf("¾ç¶ì");
			break;	
	}
}

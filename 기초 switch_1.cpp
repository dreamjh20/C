#include <stdio.h>

int main() {
	int dall;
	scanf("%d", &dall);
	switch(dall){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:	
			printf("31일");
			break; 
		case 2:
			printf("28일 또는 29일");
			break; 	
		case 4:
		case 6:
		case 9:
		case 11:	
			printf("30일"); 	 		
	}
	return 0;
} 

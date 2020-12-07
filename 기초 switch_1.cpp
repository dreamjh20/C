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
			printf("31老");
			break; 
		case 2:
			printf("28老 肚绰 29老");
			break; 	
		case 4:
		case 6:
		case 9:
		case 11:	
			printf("30老"); 	 		
	}
	return 0;
} 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	printf("숫자는 한 칸씩 띄어서 치세용~");
	int arr[3], arr1[3];
	int i, j, n, str=0, ball=0, aw, rand_num;
	srand((unsigned)time(NULL));
	for(i=0; i<3; i++){
		arr[i] = rand()%10;
		printf("%d ", arr[i]);
	}
	printf("\n");
	
	while(1){
	bdc:	
		if(aw>6){
			printf("U failed");
			break;
		}
		aw++;
		for(i=0; i<3; i++){
			scanf("%d", &arr1[i]);
		}
		for(i=0; i<3; i++){
			for(j=0; j<3; j++){
				if(arr1[i]==arr1[i+1]&&arr1[i+1]==arr1[i+2]&&arr1[i]==arr1[i+2]){
				printf("Out\n남은 기회 %d 번\n", 7-aw);
				goto bdc;
				}
				else if(arr[i] ==arr1[j]){
					if(arr[i] == arr1[i]){
						str++;
					}
					else ball++;
			 	}
			}
		}
		if(str==0 && ball==0) printf("Out\n남은 기회 %d 번\n", 7-aw);
		else if(arr1[0] == arr[0] && arr1[1] == arr[1] && arr1[2] == arr[2]) {
		printf("Consider U best!");
		break;
		}
		else {
		printf("%d strike  %d ball\n", str, ball);
		str=0; ball=0; 
		printf("남은 기회 %d 번\n", 7-aw); 
		}
	}
	return 0;
}

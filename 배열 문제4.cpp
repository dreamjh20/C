#include<stdio.h>

int main(){
	int arr[10],i,j=1;
	for(i=0;i<10;i++) {
		arr[i] = j;
		j+=2;
	}
	printf("1. "); 
	for(i=0;i<10;i++)printf("%d ",arr[i]);
	printf("\n\n");
	
	printf("2. ");
	for(i=9;i>-1;i--)printf("%d ",arr[i]);
	printf("\n\n");
	
	printf("3. ");
	for(i=0;i<10;i++) arr[i] = arr[i]*arr[i];
	for(i=0;i<10;i++) printf("%d ",arr[i]);
	printf("\n\n");
	
	j=1;
	for(i=0;i<10;i++) {
		arr[i] = j;
		j+=2;
	}//다시 1번의 배열로 바꿈. 
	
	int sum=0, mul=1, avg;
	for(i=0;i<10;i+=2) sum+=arr[i];
	printf("4. sum = %d\n",sum);
	for(i=0;i<10;i+=2) mul*=arr[i];
	printf("   mul = %d\n",mul);
	printf("   avg = %.1f\n\n",float(sum)/5);
	
	printf("5. ");
	for(i=0;i<5;i++){
		printf("%d ",arr[i]+arr[9-i]);
	}
}

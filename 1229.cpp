#include<stdio.h>

int main(){
	double height, weight, stdweight, degree;
	scanf("%lf %lf",&height, &weight);
	if(height<150) stdweight = height - 100;
	else if(height<160) stdweight = (height-150)/2+50;
	else stdweight = (height-100)*0.9;
	degree = (weight-stdweight)*100/stdweight;
	if(degree<=10) printf("정상");
	else if(degree<=20) printf("과체중");
	else printf("비만");
}

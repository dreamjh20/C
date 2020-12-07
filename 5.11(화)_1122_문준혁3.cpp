#include<stdio.h>

int main(){
	int a,b,c,d,e;
	printf("국어, 영어, 수학, 과학의 점수(정수)를 순서대로 입력하세요.\n");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    printf("총   점수: ");
    printf("%d\n", a+b+c+d+e); 
    printf("평균 점수: "); 
    printf("%0.2lf", (double)(a+b+c+d+e)/5);
}

#include <stdio.h>
struct bdc{
	int x;
	int y;
};
int main(){
	int i, xsum=0, ysum = 0;
	struct bdc darl[3];
	for(i=0; i<3; i++){
		scanf("%d", &darl[i].x);
		scanf("%d", &darl[i].y);
		xsum+=darl[i].x;
		ysum+=darl[i].y;
	}
	printf("%f, %f", xsum/3.0, ysum/3.0);
}

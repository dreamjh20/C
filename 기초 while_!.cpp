#include <Stdio.h>

int main() {
	int i=0, n;
	float gae, hap;
	printf("�� ���� ������ ����� �˰� �ʹ�?  ");
	scanf("%f", &gae);
	while(i<gae){
		scanf("%d", &n);
		hap = hap+n;	
		i++;
	}
	printf("%lf", hap/gae);
	return 0;
}

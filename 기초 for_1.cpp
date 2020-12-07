#include <Stdio.h>

int main() {
	int fir, sec, hap;
	scanf("%d %d", &fir, &sec);
	
	for(; fir<=sec; fir++){
		hap+=fir;
	}
	printf("%d", hap);
}

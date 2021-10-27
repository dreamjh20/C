#include <stdio.h>
#include <unistd.h>

pid_t getpid();
pid_t getppid();

int main()
{
	int pid;
	printf("My process number: [%d] \n", getpid());
	printf("My parents process number: [%d] \n", getppid());
}

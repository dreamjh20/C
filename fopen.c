/*
 * fopen.c
 *
 *  Created on: 2021. 9. 1.
 *      Author: bstudent
 */

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

int main(int argc, char *argv[])
{

	int fd;
	printf("START\n");
	if((fd=open(argv[1], O_RDWR)) == -1)
	{
		printf("FILE OPEN ERROR");
	}
	else
	{
		printf("FILE %s OPENED: %d\n", argv[1], fd);
	}

	
	exit(0);
}

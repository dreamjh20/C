#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "student.h"

int main(int argc, char *argv[])
{
	int fd, id;
	char c;
	struct student rec;

	if(argc < 2) 
	{
		fprintf(stderr, "USAGE: %s file\n", argv[0]);
		exit(1);
	}

	if((fd = open(argv[1], O_RDONLY)) == -1)
	{
		perror(argv[1]);
		exit(2);
	}

	do
	{
		printf("\n ENTER NUMBER: ");
		if (scanf("%d", &id) == 1)
		{
			lseek(fd, (id-START_ID)*sizeof(rec), SEEK_SET);
			if((read(fd, &rec, sizeof(rec)) > 0) && (rec.id != 0))
			{
				printf("NUMBER: %d\t NAME: %s\t SCORE: %d\n", rec.id, rec.name, rec.score);
			}
			else
			{
				printf("NO RECORD %d\n", id);
			}
		}
		else printf("INPUT ERROR");

		printf("CONTINUE?(Y/N)");
		scanf("%c", &c);
	}while(c=='Y');
	
	close(fd);
	exit(0);
}

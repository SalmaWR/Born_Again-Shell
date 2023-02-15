#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>

int main (int agrc, char *argv[])
{
	/*to implement parallel processing*/
	int id = fork();
	printf("hello world from id:%d\n", id);
	return 0;
}


#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>

int main (int agrc, char *argv[])
{
	/*to implement parallel processing*/
	int id = fork();
	printf("hello world from id:%d\n", id);
	if (id == 0)
	{
		printf("this is the child process\n");
	
	}else{
		printf("this is the main process\n");
	}
	return 0;
}

/*
* what fork() function do is forking my excution line
* we can say that a child process gets born 
* everthing before fork function is excuted once
* the ID of the child process is gonna be zero 
*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<time.h>

int main( int argc, char* argv[])
{

int id = fork();
int n;

//child process
if (id == 0)
{
n = 1;
}
//main process
else
{
n = 6;
}

if(id != 0);
{
wait();
}

for (int i = n; i < n + 5; i++)
{
printf("%d", i); 
fflush(stdout);
}
if (id != 0)
{
printf("\n");
}
return 0;

}

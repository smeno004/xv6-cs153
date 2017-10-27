#include "types.h"
#include "user.h"
#include "syscall.h"
int
main(int argc, char *argv[])
{

    int testpid[5] = {0};
    int status;
    for (unsigned i = 0; i < 6; i++)
    {
       testpid[i] = fork();
    }
    
    if(pid == 0)
    {
	printf("Child");
    	exit(0);
    }
    else if(pid > 0)
    { 
        printf("Parent before waiting");
	waitpid(0,&status,0)
	printf("Parent after waiting");
    }
    else
    {
	printf("pid returned a negative number");
	exit(-1);
    }
 
    exit(0);
}

#include "types.h"
#include "user.h"
#include "syscall.h"

int
main(int argc, char *argv[])
{
    int pid1 = 0;
    int pid2 = 0;
    int i = 3;
    pid1 = fork();
    int status;

    if (pid1 != 0) {
      printf(0,"%d\n",++i);
      pid2 = fork();
      if (pid2 != 0) {
        waitpid(pid1, &status, 0);
        printf(0, "%d\n", ++i);
        waitpid(pid2, &status, 0);
        printf(0, "%d\n", ++i);
      }
      else {
        fork();
        printf(0,"%d\n",++i);
      }
      exit(0);
    }
    printf(0,"%d\n",++i);
    

    //int testpid[2] = {0};
    //int status;
    //for (unsigned i = 0; i < 2; i++)
    //{
    //   testpid[i] = fork();
	//switchPriority(testpid[i], i);
	//printf(0, "%d: %d\n", i, testpid[i]);
	//if(testpid[i] == 0)
    	//{
		//char array[40] = "Child before waiting";
		//char array5[40] = "Child after waiting";
        	//printf(0,"%s%d\n", array,i);
		//waitpid(testpid[1],&status,0);
		//printf(0,"%s%d\n", array5, i);
        	//exit(0);
    	//}
    	//else if(testpid[i] > 0)
    	//{
		//char array1[40] = "Parent before waiting";
		//char array2[40] = "Parent after waiting";
        	//printf(0,"%s%d\n", array1,i);
		//printf(0, "%d\n", testpid[i]);
        	//waitpid(testpid[i],&status,0);
		//wait(&status);
        	//printf(0,"%s%d\n", array2,i);
   	//}
   	//else
    	//{
		//char array3[40] = "pid returned negative";
        	//printf(0,"%s%d\n", array3,i);
        	//exit(-1);
    	//}
    //}
 
    exit(0);
}

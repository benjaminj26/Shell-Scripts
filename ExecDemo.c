#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
		//A null terminated array of character
		//pointers
		char *args[]={"./EC",NULL};
		execvp(args[0],args);
	
		/*All statements are ignored after execvp() call as this whole
		process(execDemo.c) is replaced by another process (ex.c)
		*/
		printf("Ending-----\n");
	
	return 0;
}

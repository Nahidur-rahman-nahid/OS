#include <stdlib.h> /* needed to define exit() */
#include <unistd.h> /* needed to define getpid() */
#include <stdio.h> /* needed for printf() */
int main(){
char *args[] = {"ls", "-aF", "/", 0}; /* each element represents a command
line argument */
char *env[] = { 0 }; /* leave the environment list null */


//printf("About to run /bin/ls\n");

	/*execve  func e        ---> path args env */
//execve("/bin/ls", args, env);



printf("About to run ls\n");

//execlp korlam         which execlp, which allows you to specify all the arguments as parameters to the function.

//execlp("ls","ls","-aF","/",(char*)0);

printf("About to run execlp\n");

execvp("ls",args);
perror("execve"); /* if we get here, execve failed */
exit(1);
}

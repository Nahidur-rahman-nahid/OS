#include<bits/stdc++.h>
#include<unistd.h>
#include<stdlib.h>
void runit(){
	
	execlp("ls","ls","-aF","/",(char*)0);


}
int main(){

	int pid;
	switch(pid = fork()){
	
	      case 0:runit();
	             break;
	      default:
	      	sleep(5);
	      	printf("I'm still here\n");
	      	break;
	      	
	      case -1 : perror("error");
	    
	
	}
	exit(0);
	

}

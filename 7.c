/*
6. Write a program child executes(exec()) a new program , while parent waits for
child task to get complete.
*/

#include<stdio.h>
#include<unistd.h>


int main(){
    int pid;
    pid=fork();
    if(pid==0){
        //child process
        printf("Child process is running \n");
        int ret = execl("/home/emily/linux/process_assignment","",NULL);
        //5 file will execute
	printf("child Process is Stopped...!\n");
    
    }
    else{
        wait(0);//parent will wait till child execute
        //sleep(5);
        printf("Parent running\n");
        printf("Parent Process is Stopped...!\n");
    }
}

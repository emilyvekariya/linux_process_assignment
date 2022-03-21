/*
4.A processs using execl() system call should replace a new command line program.
*/
#include <stdio.h>


int main(int argc,char *argv[])
{
    execlp("vim","vim",argv[1], NULL);
    return 0;
}

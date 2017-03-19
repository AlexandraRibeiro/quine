#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
/*
	Comment outside.
*/
#define SOURCECODE "#include <stdio.h>%c#include <unistd.h>%c#include <fcntl.h>%c/*%c%cComment outside.%c*/%c#define SOURCECODE %c%s%c%c#define KID %cGrace_kid.c%c%c#define FT int main(){int fd;if((fd=open(KID,O_WRONLY|O_CREAT|O_TRUNC,0600))==-1)return(1);dprintf(fd,SOURCECODE,10,10,10,10,9,10,10,34,SOURCECODE,34,10,34,34,10,10,10);close(fd);return(0);}%cFT%c"
#define KID "Grace_kid.c"
#define FT int main(){int fd;if((fd=open(KID,O_WRONLY|O_CREAT|O_TRUNC,0600))==-1)return(1);dprintf(fd,SOURCECODE,10,10,10,10,9,10,10,34,SOURCECODE,34,10,34,34,10,10,10);close(fd);return(0);}
FT

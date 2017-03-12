#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>
#define FILE "Sully_%i.c"
#define COMMAND "clang -Wall -Wextra -Werror -o Sully_%i Sully_%i.c ; ./Sully_%i"
#define SOURCECODE "#include <stdio.h>%c#include <stdlib.h>%c#include <fcntl.h>%c#include <string.h>%c#include <unistd.h>%c#define FILE %cSully_%ci.c%c%c#define COMMAND %cclang -Wall -Wextra -Werror -o Sully_%ci Sully_%ci.c ; ./Sully_%ci%c%c#define SOURCECODE %c%s%c%cint main(){int i=%i;int fd;int ret;char *strp=malloc(strlen(COMMAND)+1);char *filename=malloc(strlen(FILE)+1);i--;if(access(%cSully_5.c%c,F_OK)==-1){i=5;}if(sprintf(filename,FILE,i)==-1){free(filename);free(strp);return(1);}if((fd=open(filename,O_WRONLY|O_CREAT|O_TRUNC,0700))==-1)return(1);if(dprintf(fd,SOURCECODE,10,10,10,10,10,34,37,34,10,34,37,37,37,34,10,34,SOURCECODE,34,10,i,34,34,10)<=0){free(filename);free(strp);return(1);}if(i==0)return(0);if(sprintf(strp,COMMAND,i,i,i)==-1){free(strp);free(filename);return(1);}ret=system(strp);if(ret==-1||ret==127){free(strp);free(filename);return(1);}free(strp);free(filename);}%c"
int main(){int i=3;int fd;int ret;char *strp=malloc(strlen(COMMAND)+1);char *filename=malloc(strlen(FILE)+1);i--;if(access("Sully_5.c",F_OK)==-1){i=5;}if(sprintf(filename,FILE,i)==-1){free(filename);free(strp);return(1);}if((fd=open(filename,O_WRONLY|O_CREAT|O_TRUNC,0700))==-1)return(1);if(dprintf(fd,SOURCECODE,10,10,10,10,10,34,37,34,10,34,37,37,37,34,10,34,SOURCECODE,34,10,i,34,34,10)<=0){free(filename);free(strp);return(1);}if(i==0)return(0);if(sprintf(strp,COMMAND,i,i,i)==-1){free(strp);free(filename);return(1);}ret=system(strp);if(ret==-1||ret==127){free(strp);free(filename);return(1);}free(strp);free(filename);}

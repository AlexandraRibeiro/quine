#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#define FILE "Sully_4.c"
#define COMMAND "clang -Wall -Wextra -Werror -o Sully_4 Sully_4.c"
#define SOURCECODE "#include <stdio.h>%c#include <stdlib.h>%c#include <fcntl.h>%c#include <string.h>%c#define FILE %cSully_%i.c%c%c#define COMMAND %cclang -Wall -Wextra -Werror -o Sully_%i Sully_%i.c%c%c#define SOURCECODE %c%s%c%cint main(){int i=%i;int fd;int ret;char *strp=malloc(strlen(COMMAND)+1);char *filename=malloc(strlen(FILE)+1);while (1){i--;if (asprintf(&filename,FILE,i)==-1){free(filename);return(1);}if((fd=open(filename,O_WRONLY|O_CREAT|O_TRUNC,0700))==-1)return(1);dprintf(fd,SOURCECODE,10,10,10,10,34,i,34,10,34,i,i,34,10,34,SOURCECODE,34,10,10);if(i==0)return(0);else{if(asprintf(&strp,COMMAND,i,i)==-1){free(strp);return(1);}ret=system(strp);if(ret==-1||ret==127){free(strp);return(1);}}}}%c"
int main(){int i=4;int fd;int ret;char *strp=malloc(strlen(COMMAND)+1);char *filename=malloc(strlen(FILE)+1);while (1){i--;if (asprintf(&filename,FILE,i)==-1){free(filename);return(1);}if((fd=open(filename,O_WRONLY|O_CREAT|O_TRUNC,0700))==-1)return(1);dprintf(fd,SOURCECODE,10,10,10,10,34,i,34,10,34,i,i,34,10,34,SOURCECODE,34,10,10);if(i==0)return(0);else{if(asprintf(&strp,COMMAND,i,i)==-1){free(strp);return(1);}ret=system(strp);if(ret==-1||ret==127){free(strp);return(1);}}}}

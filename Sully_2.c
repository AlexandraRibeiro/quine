#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>
#define FILE "Sully_%i.c"
#define EXE "./Sully_%i"
#define COMMAND "clang -Wall -Wextra -Werror -o Sully_%i Sully_%i.c"
#define SOURCECODE "#include <stdio.h>%c#include <stdlib.h>%c#include <fcntl.h>%c#include <string.h>%c#include <unistd.h>%c#define FILE %cSully_%ci.c%c%c#define EXE %c./Sully_%ci%c%c#define COMMAND %cclang -Wall -Wextra -Werror -o Sully_%ci Sully_%ci.c%c%c#define SOURCECODE %c%s%c%cint main(){int i=%i;int fd;int ret;if(i<0)return(0);char *strp;char *filename;if((strp=malloc(strlen(COMMAND)+1)) == NULL)return(1);if((filename=malloc(strlen(FILE)+1))==NULL){free(strp);return(1);}if(sprintf(filename,FILE,i)<=0){free(filename);free(strp);return(1);}if(access(filename,F_OK)!=-1){i--;}if(sprintf(filename,FILE,i)<=0){free(filename);free(strp);return(1);}if((fd=open(filename,O_WRONLY|O_CREAT|O_TRUNC,0700))==-1)return(1);if(dprintf(fd,SOURCECODE,10,10,10,10,10,34,37,34,10,34,37,34,10,34,37,37,34,10,34,SOURCECODE,34,10,i,10)<=0){free(filename);free(strp);return(1);}close(fd);if(sprintf(strp,COMMAND,i,i)<=0){free(strp);free(filename);return(1);}ret=system(strp);if(ret==-1||ret==127){free(strp);free(filename);return(1);}if(i!=0){if(sprintf(strp,EXE,i)<=0){free(strp);free(filename);return(1);}ret=system(strp);if(ret==-1||ret==127){free(strp);free(filename);return(1);}}free(strp);free(filename);}%c"
int main(){int i=2;int fd;int ret;if(i<0)return(0);char *strp;char *filename;if((strp=malloc(strlen(COMMAND)+1)) == NULL)return(1);if((filename=malloc(strlen(FILE)+1))==NULL){free(strp);return(1);}if(sprintf(filename,FILE,i)<=0){free(filename);free(strp);return(1);}if(access(filename,F_OK)!=-1){i--;}if(sprintf(filename,FILE,i)<=0){free(filename);free(strp);return(1);}if((fd=open(filename,O_WRONLY|O_CREAT|O_TRUNC,0700))==-1)return(1);if(dprintf(fd,SOURCECODE,10,10,10,10,10,34,37,34,10,34,37,34,10,34,37,37,34,10,34,SOURCECODE,34,10,i,10)<=0){free(filename);free(strp);return(1);}close(fd);if(sprintf(strp,COMMAND,i,i)<=0){free(strp);free(filename);return(1);}ret=system(strp);if(ret==-1||ret==127){free(strp);free(filename);return(1);}if(i!=0){if(sprintf(strp,EXE,i)<=0){free(strp);free(filename);return(1);}ret=system(strp);if(ret==-1||ret==127){free(strp);free(filename);return(1);}}free(strp);free(filename);}

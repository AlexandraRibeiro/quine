#include <stdio.h>

int main(){
int x = 5;
int fd;

if((fd=open())==-1)
	return(EXIT_FAILURE);
char *c="#include <stdio.h>%cchar ft(char c2);%c/*%c%cComment outside.%c*/%cint main(){%c/*%c%cComment inside.%c*/%cchar c2='H';char *c=%c%s%c;printf(c,10,10,10,9,10,10,10,10,9,10,10,34,c,34,10,10);c2=ft(c2);}%cchar ft(char c2){c2='M';return(c2);}%c";
printf(c,10,10,10,9,10,10,10,10,9,10,10,34,c,34,10,10);
}

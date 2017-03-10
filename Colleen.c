/*
	This program will print its own source when run.
*/
main(){char *c="/*%c%cThis program will print its own source when run.%c*/%cmain(){char *c=%c%s%c;printf(c, 10, 9, 10, 10, 34, c, 34);}";printf(c, 10, 9, 10, 10, 34, c, 34);}

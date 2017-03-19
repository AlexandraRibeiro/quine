#
#	Comment outside.
#
SOURCECODE = "#%c#	Comment outside.%c#%cSOURCECODE = %c%s%c%cFILE = open(%cGrace_kid.py%c, 'w+')%cFT = lambda FILE : FILE.write(SOURCECODE %c (10,10,10,34,SOURCECODE,34,10,34,34,10,37,10,10))%cFT(FILE)%c"
FILE = open("Grace_kid.py", 'w+')
FT = lambda FILE : FILE.write(SOURCECODE % (10,10,10,34,SOURCECODE,34,10,34,34,10,37,10,10))
FT(FILE)

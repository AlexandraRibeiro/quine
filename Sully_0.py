import os
SOURCECODE = 'import os\nSOURCECODE = %s\ndef main():\n#\n#\tComment inside.\n#\n\ti = %i;\n\tif i<0: return -1;\n\tfilename=\'\'.join(["Sully_",str(i),".py"]);\n\tif os.path.isfile(filename) != True: fd=open(filename,"w+");\n\telse: i=i-1;filename=\'\'.join(["Sully_",str(i),".py"]);fd=open(filename,"w+");\n\tif fd < 0: return -1;\n\tfd.write(SOURCECODE%%(repr(SOURCECODE), i));\n\tfd.close();\n\tif i == 0: return 0;\n\tos.system(\'\'.join(["python ",filename]));\nmain()\n'
def main():
#
#	Comment inside.
#
	i = 0;
	if i<0: return -1;
	filename=''.join(["Sully_",str(i),".py"]);
	if os.path.isfile(filename) != True: fd=open(filename,"w+");
	else: i=i-1;filename=''.join(["Sully_",str(i),".py"]);fd=open(filename,"w+");
	if fd < 0: return -1;
	fd.write(SOURCECODE%(repr(SOURCECODE), i));
	fd.close();
	if i == 0: return 0;
	os.system(''.join(["python ",filename]));
main()

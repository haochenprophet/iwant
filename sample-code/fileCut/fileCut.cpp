#include "fileCut.h"

int CfileCut::cut(char *file,long start ,long size,char *out_file)
{
	this->allotFileMemory(file);

	if(start >=this->allot.fileSize) return 0;

	FILE *fp;
	if(!(fp=fopen(out_file,"wb"))){
		printf("Error:can not open the %s file.\n",out_file);
		return EOF;
	}
	
	if(size==-1||start+size>this->allot.fileSize) size =this->allot.fileSize-start;

	fwrite(this->allot.start+start,sizeof(char),size,fp);
	fclose(fp);
	
	return size;
}

/*	main input:
	argv[1]==cut source filename.must input .
	argv[2]=start, default=0 .
	argv[3] size, default=-1 .
	argv[4] out file name,default is "file.out" .
*/

int main(int argc,char *argv[])
{
	CfileCut f;
	
	if(argc>4) return f.cut(argv[1],atol(argv[2]),atol(argv[3]),argv[4]);
	if(argc>3) return f.cut(argv[1],atol(argv[2]),atol(argv[3]));
	if(argc>2) return f.cut(argv[1],atol(argv[2]));
	if(argc>1) return f.cut(argv[1]);
	printf("fcut <cutFileName> [start] [size] [outfilename]\n");
	return 0;
}

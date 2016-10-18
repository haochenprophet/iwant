#include "AllotMEM.h"

AllotFileMem::AllotFileMem()
{
	this->current=0;
	this->end=0;
	this->fileEmpty=1;
	this->fileSize=0;
	this->readSize=0;
	this->start=0;
}

CAllotMem::CAllotMem()
{
	this->clear();
}

CAllotMem::CAllotMem(char * cpFileName)
{
	this->clear();
	this->allotFileMemory(cpFileName,&this->allot);
}

CAllotMem::CAllotMem(FILE * fp)
{
	this->clear();
	this->allotFileMemory(fp,&this->allot);
}

CAllotMem::~CAllotMem()
{
	this->freeAllot();
}

void CAllotMem::freeAllot()
{
	this->freeAllot(&this->allot);
}

void CAllotMem::freeAllot(AllotFileMem *p)
{
	if(this->allot.start){
		free(p->start);
		this->clear(p);
	}
}

void CAllotMem::clear()
{
	this->clear(&this->allot);
}

void CAllotMem::clear(AllotFileMem *p) //clear Allot
{
	p->current=0;
	p->end=0;
	p->fileEmpty=1;
	p->fileSize=0;
	p->readSize=0;
	p->start=0;
}

long CAllotMem::allotFileMemory(FILE *fp)
{
	return this->allotFileMemory(fp,&this->allot);
}

long CAllotMem::allotFileMemory(FILE *fp,AllotFileMem * p)	//Return Read AllotMemTPL.Start[] File Size
{
	p->start=0;
	p->fileEmpty=YES;
	if((p->fileSize=checkFileSize(fp))==EOF){
		printf("Error:if((p->fileSize=checkFileSize(fp))==EOF)\n");
		return	EOF;
	}
	
	if(p->fileSize!=0){p->fileEmpty=NO;}
	if((p->start=(char*)malloc(p->fileSize+1))==NULL){ //will fill zero
		printf("Error:if((p->start=(char*)malloc(p->fileSize))==NULL)\n");
		return EOF;
	}
	
	clearerr(fp); 
	fseek(fp,0,SEEK_SET);			//Set Filepoint
	p->readSize=fread(p->start,1,p->fileSize,fp);
	
	p->end=p->start+p->readSize;
	p->current=p->start;
	*p->end='\0'; //end file to 0
	if(ferror(fp)!=0){
		printf("Error:allotFileMemory()->if(ferror(fp)!=0)\n");
		return	EOF;
	}
	
	return 0;
}

long CAllotMem::allotFileMemory(char *cpFileName)
{
	return this->allotFileMemory(cpFileName,&this->allot);
}

long CAllotMem::allotFileMemory(char *cpFileName,AllotFileMem * p)
{
	FILE *fp;
	if(!(fp=fopen(cpFileName,"rb"))){
		printf("Error:can not open the %s file.\n",cpFileName);
		return EOF;
	}
	long ret=this->allotFileMemory(fp,p);
	fclose(fp);
	return ret;
}

long CAllotMem::checkFileSize(FILE *fp)
{	
	fseek(fp,0L,SEEK_END);
	return ftell(fp);
}

void CAllotMem::display(AllotFileMem *p)
{
	char *cp;
	printf("start=%08lXh end=%08lXh current=%08lXh\n",p->start,p->end,p->current);
	printf("readSize=%08lXh fileSize=%08lXh fileEmpty=%ld\n[file info]:\n",p->readSize,p->fileSize,p->fileEmpty);
	for(cp=p->start;cp<p->end;cp++) printf("%c",*cp);
}

void CAllotMem::display()
{
	this->display(&this->allot);
}

int CAllotMem::token(const char *strDelimit)
{
	if(!this->allot.start) return -1;
	char * token = strtok(this->allot.start,strDelimit); //C4996
	while( token != NULL )// While there are tokens in "string"
	{
#if ALLOTMEM_DEBUG
		printf( " %s\n", token );//test	ok	
#endif
		token = strtok(NULL,strDelimit); // Get next token
		if(token>=this->allot.end) token=NULL;
	}
	return 0;
}

int CAllotMem::token()
{
	return this->token("\n\r");
}

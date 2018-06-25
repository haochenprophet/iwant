
#include "fileAllot.h"

CfileMem::CfileMem()
{
	this->clear();
}

void CfileMem::clear()
{
	this->current = 0;
	this->end = 0;
	this->empty = true;
	this->file_size = 0;
	this->read_size = 0;
	this->start = 0;
}

int CfileAllot::my_init(void *p)
{
	this->name = "CfileAllot";
	this->alias = "fileAllot";
	return 0;
}

CfileAllot::CfileAllot()
{
	this->my_init();
	this->clear();
}

CfileAllot::CfileAllot(char * fname)
{
	this->my_init();
	this->clear();
	this->allot(fname,&this->file_m);
}

CfileAllot::CfileAllot(FILE * fp)
{
	this->my_init();
	this->clear();
	this->allot(fp,&this->file_m);
}

CfileAllot::~CfileAllot()
{
	this->freeMe();
}

void CfileAllot::freeMe()
{
	this->freeMe(&this->file_m);
}

void CfileAllot::freeMe(CfileMem *p)
{
	if(p->start){
		free(p->start);
		this->clear(p);
	}
}

void CfileAllot::clear()
{
	this->clear(&this->file_m);
}

void CfileAllot::clear(CfileMem *p) //clear Allot
{
	p->clear();
}

long CfileAllot::allot(FILE *fp)
{
	return this->allot(fp,&this->file_m);
}

long CfileAllot::allot(FILE *fp,CfileMem * p)
{
	p->start=0;
	p->empty=true;
	if((p->file_size=fsize(fp))==EOF) return 1;//error 1
	if(p->file_size!=0){p->empty=false;}
	if((p->start=(char*)malloc(p->file_size+1))==NULL) return 2;//error 2
	clearerr(fp); 
	fseek(fp,0,SEEK_SET);			//Set Filepoint
	p->read_size=fread(p->start,1,p->file_size,fp);
	p->end=p->start+p->read_size;
	p->current=p->start;
	*p->end='\0'; //end file to 0
	if(ferror(fp)!=0) return 3;//error 3
	return 0;
}

long CfileAllot::allot(char *fname)
{
	return this->allot(fname,&this->file_m);
}

long CfileAllot::allot(char *fname,CfileMem * p)
{
	FILE *fp;
	if(!(fp=fopen(fname,"rb"))){
		printf("Error:can not open the %s file.\n",fname);
		return EOF;
	}
	long ret=this->allot(fp,p);
	fclose(fp);
	return ret;
}

long CfileAllot::fsize(FILE *fp)
{	
	fseek(fp,0L,SEEK_END);
	return ftell(fp);
}

void CfileAllot::display(CfileMem *p,int binary)
{
	char *cp;
	for(cp=p->start;cp<p->end;cp++) 
	{
		if(binary) printf("%02X ",*cp&0xFF);
		else printf("%c",*cp);
	}
}

void CfileAllot::display(int binary)
{
	this->display(&this->file_m,binary);
}

void CfileAllot::display(char *cp, int count, int binary)
{
	int i;
	for (i = 0;i<count;i++)
	{
		if (binary) printf("%02X ", cp[i] & 0xFF);
		else printf("%c", cp[i]);
	}
}

int CfileAllot::token(const char *delimit)
{
	if(!this->file_m.start) return -1;
	char * token = strtok(this->file_m.start,delimit); //C4996
	while( token != NULL )// While there are tokens in "string"
	{
		//printf( " %s\n", token );//test	 ok	
		token = strtok(NULL,delimit); // Get next token
		if(token>=this->file_m.end) token=NULL;
	}
	return 0;
}

int CfileAllot::token()
{
	return this->token("\n\r");
}

//#define FILEALLOT_TEST 0//1
#if FILEALLOT_TEST
int main()
{
	CfileAllot fallot("fileAllot.cpp");
	fallot.display();
	return 0;
}
#endif

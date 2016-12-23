#include "question.h"
int Cquestion::my_init(void *p)
{
	this->name = "Cquestion";
	this->alias = "question";
	return 0;
}

Cquestion::Cquestion()
{
	this->my_init();
}


int Cquestion::q_question(char * sQ,char *sA ,char *sR)
{
	int ret=0;
	char *cp;
	cout<<++this->count<<": "<<sQ<<endl;
	cout<<sA<<endl;
	ret=wait_char_abcd(NULL);

	cp=this->get_result((char*)sR,ret,1);
	if(cp) 
	{
		//cout<<cp<<endl;cout<<atoi(cp)<<endl;//test ok
		this->direction+=atoi(cp);
	}
	
	cp=this->get_result((char*)sR,ret,2);
	if(cp)
	{
		 //cout<<cp<<endl;cout<<atoi(cp)<<endl;//test ok
		 this->value+=atoi(cp);
	}

	return ret;//abcd
}


char * Cquestion::get_result(char *strR,int abcd,int index)
{
	char c,*cp;
	switch(abcd)
	{
		case 1:
			c='A';
			break;
		case 2:
			c='B';
			break;
		case 3:
			c='C';
			break;
		case 4:
			c='D';
			break;
		default:
			return NULL;
	}

	for(cp=strR;*cp!='\0';cp++)
	{
		if(*cp==c||*cp==(c+0x20))//
		{
			for(;*cp!='('&&*cp!='\0';cp++);
			if(*cp=='\0') return NULL;
			if(*cp=='(') cp++;
			for(;*cp==' '||*cp=='\t';cp++);
			if(index<2)return cp;
			
			for(;*cp!=','&&*cp!=')'&&*cp!='\0';cp++);
			if(*cp==')'||*cp=='\0')	return NULL;
			if(*cp==',') cp++;
			
			for(;*cp==' '||*cp=='\t';cp++);
			return cp;			
		}

	}
	return NULL;
}

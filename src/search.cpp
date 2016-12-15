#include "search.h"
int Csearch::my_init(void *p)
{
	this->name = "Csearch";
	this->alias = "search";
	return 0;
}

Csearch::Csearch()
{
	this->my_init();
}

char * Csearch::searchString(char string[],char *start,char *end,int retStart)
{
	char *cp,*current;
	for(cp=string,current=start;current<end&&*cp!='\0';current++)
	{
		if(*cp==*current){cp++; continue;}
		if(toupper(*cp)==toupper(*current)){cp++; continue;}
		if(isspace(*current)){current++;continue;}
		cp=string; current=start++;//printf("*cp=%c *current=%c\n",*cp,*current); //test
	}//endfor
	
	if(*cp=='\0'&&retStart==0) return current;
	if(*cp=='\0'&&retStart){start;return start;}
	return NULL;
}

char * Csearch::searchString(char string[],char *start,long end,int retStart)
{
	char *cp,*current;
	long count=end;
	for(cp=string,current=start;*cp!='\0'&&count>0;current++,count--)
	{
		if(*cp==*current){cp++; continue;}
		if(toupper(*cp)==toupper(*current)){cp++; continue;}
		if(isspace(*current)){current++;continue;}
		cp=string; current=start++;count=--end;
	}//endfor
	
	if(*cp=='\0'&&retStart==0) return current;
	if(*cp=='\0'&&retStart){start;return start;}
	return NULL;
}

char * Csearch::searchKmp(char *start,char *str,long len,int retStart) //KMP Search return 0:no match other:match
{ 
	int i=0,j=1,tlen,*next; 

	tlen=strlen(str);
	if(!tlen) return 0;

	next=(int*)malloc(tlen*sizeof(int));//allot memory
	if(!next){//error
		printf("Error:no engouh memory,tarce:char * Csearch::searchKmp->if(!next)\n");
		exit(-1);
	}

	get_next(str,next);

	while (i<len&&j<=tlen) {
		if (j==0||start[i]==str[j-1]){i++;j++;} 
		else j=next[j];
	}
	free(next);//free mem
	if (j>tlen){
		if(!retStart) return start+i-tlen;//match
		return start+i;
	}
	else return NULL; //no match	
} 

void Csearch::get_next(char *t,int *next) 
{ 
	int i=1,j=0; 
	next[0]=next[1]=0; 
	while (i<(int)strlen(t)){ 
		if (j==0||t[i]==t[j]){i++;j++;next[i]=j;} 
		else j=next[j]; 
	} 	
}



#ifndef SEARCH_TEST
#define SEARCH_TEST 0//1
#endif

#if SEARCH_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	cout << "SEARCH_TEST\n\n";

	return 0;
}
#endif 
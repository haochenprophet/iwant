#include "question.h"

int Cquestion::q_count=0;
int Cquestion::q_value=0;
int Cquestion::q_direction=0;
int Cquestion::loop_count=1;//question status and loop

int Cquestion::my_init(void *p)
{
	this->name = "Cquestion";
	this->alias = "question";

	return 0;
}

Cquestion::Cquestion()
{
	this->my_init();
	this->q_buf_len=this->allot(Q_BUF_LEN,(void **)&this->q_buf);
	this->a_buf_len=this->allot(Q_BUF_LEN,(void **)&this->a_buf);
	this->r_buf_len=this->allot(Q_BUF_LEN,(void **)&this->r_buf);
	this->f_buf_len=this->allot(Q_BUF_LEN,(void **)&this->f_buf);
	this->d_buf_len=this->allot(Q_BUF_LEN,(void **)&this->d_buf);
}

Cquestion::~Cquestion()
{
	if(this->q_buf) delete[] this->q_buf;
	if(this->a_buf) delete[] this->a_buf;
	if(this->r_buf) delete[] this->r_buf;
	if(this->f_buf) delete[] this->f_buf;
	if(this->d_buf) delete[] this->d_buf;
}


int Cquestion::q_dir_value(char *sR,char* fB,int abcd)
{
	char *cp;
	cp=this->get_result((char*)sR,abcd,1);
	if(cp) 
	{
		//std::cout<<cp<<endl;std::std::cout<<atoi(cp)<<endl;//test ok
		Cquestion::q_direction+=atoi(cp);
		if(fB)
		{
				cp=this->get_feedback((char*)fB,abcd,1);
				if(cp) Cquestion::q_direction+=atoi(cp);
		}
	}
	
	cp=this->get_result((char*)sR,abcd,2);
	if(cp)
	{
		 //std::cout<<cp<<endl;std::cout<<atoi(cp)<<endl;//test ok
		 Cquestion::q_value+=atoi(cp);
		if(fB)
		{
				cp=this->get_feedback((char*)fB,abcd,2);
				if(cp) Cquestion::q_value+=atoi(cp);
		}
	}
	return 0;
}

int Cquestion::q_type(int type,char *sR,char * fB,int action)
{
	Uqresult ret;
	ret.i_abcd=0;
	
	if(type==Q_SWITCH&&action==Q_WAIT_CHAR)
	{
		ret.i_abcd=wait_char_abcd(NULL);
		this->q_dir_value(sR,fB,ret.i_abcd);
	}

	if(type==Q_CHOICE)
	{
		if(action==Q_WAIT_CHAR)
		{
			ret.i_abcd=wait_char_abcd(NULL);
			this->q_dir_value(sR,fB,ret.i_abcd);	
		}
		
		if(action==Q_WAIT_STR)
		{
			std::cout<<(char *)MULTIPLE_CHOICE;
			this->wait_cin();
			if(this->at_cin_buf((char*)"A")||this->at_cin_buf((char*)"a"))
			{
				ret.c_abcd[0]='A';
				this->q_dir_value(sR,fB,1);
			}

			if(this->at_cin_buf((char*)"B")||this->at_cin_buf((char*)"b"))
			{
				ret.c_abcd[1]='B';
				this->q_dir_value(sR,fB,2);
			}
			
			if(this->at_cin_buf((char*)"C")||this->at_cin_buf((char*)"c"))
			{
				ret.c_abcd[2]='C';
				this->q_dir_value(sR,fB,3);
			}

			if(this->at_cin_buf((char*)"D")||this->at_cin_buf((char*)"d"))
			{
				ret.c_abcd[3]='D';
				this->q_dir_value(sR,fB,4);
			}
		}
	}

	return ret.i_abcd;
}


char * Cquestion::get_depend(char * sD,int abcd,int type)
{
	char s[]="X";
	if(type==Q_SWITCH)
	{
		switch(abcd)
		{
			case 1:
				s[0]='A';
				break;
			case 2:
				s[0]='B';
				break;
			case 3:
				s[0]='C';
				break;
			case 4:
				s[0]='D';
				break;
			default:
				return nullptr;
		}
		return strstr(sD,s);
	}

	if(type==Q_CHOICE)//parse Q_CHOICE 'A' 'B' 'C' 'D' 
	{
		Uqresult r;
		r.i_abcd=abcd;
		char *cp;

		for(int n=0;n<Q_SWITCH_LEN;n++)
		{
			if(r.c_abcd[n]=='\0') continue;
			s[0]=r.c_abcd[n];
			cp=strstr(sD,s);
			if(cp) return cp;
		}
	}

	return nullptr;
}

int Cquestion::q_question(char * sQ,char *sA ,char *sR,char* fB,int type,int action,char *log)
{
	Uqresult ret;
	ret.i_abcd=0;

	if(!(sQ&&sA&&sR)) return 0;//checkt nullptr

	std::cout<<++Cquestion::q_count<<": "<<sQ<<endl;
	std::cout<<sA<<endl;

	ret.i_abcd=this->q_type(type,sR,fB,action);
	
	std::cout<<endl;

	if(log&&this->q_buf)
	{
		static Cfile file;
		sprintf(this->q_buf, "%d:%s\n%s\n[%d]\n",Cquestion::q_count,sQ,sA,ret.i_abcd);
		file.f_append(log,this->q_buf);
	}

	return ret.i_abcd;//abcd
}

int Cquestion::q_question(Squestion *q,char *log)
{
//	char *sD;// depend condition
	int n,d;
	for(n=0;q[n].sQ!=nullptr;n++)
	{
		if(q[n].status==Cquestion::loop_count) continue; //had exec this question

		if(q[n].depend!=0)//check depend
		{
			d=q[n].depend;
			if(q[n+d].status!=Cquestion::loop_count&&!q[n+d].sD)//check not run
			{
				if(q[n+d].sQ==nullptr) continue;

				q[n+d].result=this->q_question(q[n+d].sQ,q[n+d].sA,q[n+d].sR,q[n+d].sF,q[n+d].type,q[n+d].action,log);
				q[n+d].status=Cquestion::loop_count;				
			}
			if(!this->get_depend(q[n].sD,q[n+d].result,q[n+d].type)) continue;
		}

		q[n].result=this->q_question(q[n].sQ,q[n].sA,q[n].sR,q[n].sF,q[n].type,q[n].action,log);
		q[n].status=Cquestion::loop_count;
	}
	return 0;
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
			return nullptr;
	}

	for(cp=strR;*cp!='\0';cp++)
	{
		if(*cp==c||*cp==(c+0x20))//
		{
			for(;*cp!='('&&*cp!='\0';cp++);
			if(*cp=='\0') return nullptr;
			if(*cp=='(') cp++;
			for(;*cp==' '||*cp=='\t';cp++);
			if(index<2)return cp;
			
			for(;*cp!=','&&*cp!=')'&&*cp!='\0';cp++);
			if(*cp==')'||*cp=='\0')	return nullptr;
			if(*cp==',') cp++;
			
			for(;*cp==' '||*cp=='\t';cp++);
			return cp;			
		}

	}
	return nullptr;
}

char * Cquestion::get_feedback(char *strF,int abcd,int index)
{
	return this->get_result(strF,abcd,index);
}

int Cquestion::question(void * p)
{
	return 0;
}

#ifndef QUESTION_TEST
#define QUESTION_TEST 0//1
#endif

#if QUESTION_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	Coperate o;
	o.question((void *)"question.log");
	return 0;
}
#endif 
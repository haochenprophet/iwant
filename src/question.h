#ifndef QUESTION_H
#define QUESTION_H

enum E_QTYPE{
	Q_SWITCH,//default:  Q switch esult A ,B,C,D /
	Q_CHOICE, //Q choice like ABC,AB ,BC ABCD
	Q_STRING, //resutl string ,like text
	Q_EXPR,//expression 
	Q_CODE,//
	Q_FILE,
	Q_IMAGE,
};

enum E_QACTION{
	Q_WAIT_CHAR,//default: wait char
	Q_WAIT_STR,//wait str
};

typedef struct Squestion_T {
	int id;//>0 ==0 no define
	int type;//ABCD ,some ABCD ,string
	char *sQ;//question
	char *sA;//answer
	char *sR;//result
	char *sF;//result feedback
	char *sD;// depend condition
	int depend; //depend index befor:-n ,after:=n, or for depend id >0
	int result; //result of choice
	int status;//not run =0 ;run=1
	int action;
}Squestion;

/* //sample code
Squestion_T q_sample[]
{
	{sQ,sA,sR,sF,sD,depend,choice,status,E_QTYPE,id}
	{nullptr,nullptr,nullptr,nullptr,nullptr,0,0,0,0,0},
};
*/
#define Q_SWITCH_LEN 4
typedef union Uqresult_T
{  
        char c_abcd[Q_SWITCH_LEN];  
        int  i_abcd;  
}Uqresult;

#include "object.h"
#include "file.h"
#include "question_def.h"

#define Q_BUF_LEN O_BUF_LEN

namespace n_question {
	class Cquestion :public Object
	{
	public:
		char * q_buf,*a_buf,*r_buf,*f_buf,*d_buf;
		int q_buf_len,a_buf_len,r_buf_len,f_buf_len,d_buf_len;
	public:
		static int q_count;
		static int q_value;
		static int q_direction;
		static int loop_count;
	public:
		Cquestion();
		~Cquestion();
		int my_init(void *p=nullptr);
		int q_type(int type,char *sR,char * fB,int action=Q_WAIT_CHAR);
		int q_dir_value(char *sR,char* fB,int abcd);
		int q_question(char * sQ,char *sA ,char *sR,char* fB=nullptr,int type=Q_SWITCH,int action=Q_WAIT_CHAR,char *log=nullptr);//return abcd
		int q_question(Squestion *q,char *log=nullptr);
		char * get_depend(char * sD,int abcd,int type=Q_SWITCH);
		char * get_result(char *strR,int abcd,int index);
		char * get_feedback(char *strF,int abcd,int index);
		int question(void * p = NULL);
	};
}

using namespace n_question;

#endif

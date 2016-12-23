#ifndef QUESTION_H
#define QUESTION_H

#include "object.h"
#include "question_def.h"

namespace n_question {
	class Cquestion :public Object
	{
	public:
		Cquestion();
		int my_init(void *p=NULL);
		int q_question(char * sQ,char *sA ,char *sR);//return abcd
		char * get_result(char *strR,int abcd,int index);
	};
}

using namespace n_question;

#endif

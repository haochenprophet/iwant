#ifndef QUESTION_DEF_CPP
#define QUESTION_DEF_CPP
#include "question_def.h"

int Cquestion_def::my_init(void *p)
{
	this->name = "Cquestion_def";
	this->alias = "question_def";
	return 0;
}

Cquestion_def::Cquestion_def()
{
	this->my_init();
}

#endif //QUESTION_DEF_CPP

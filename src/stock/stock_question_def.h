#ifndef QUESTION_DEF_H
#define QUESTION_DEF_H

#include "stock_question.h"

class Cquestion_def :public Object
{
public:
	Cquestion_def();
	int my_init(void *p=nullptr);
};
//question struct table
#define MULTIPLE_CHOICE "Multiple choice"

#endif
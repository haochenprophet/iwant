#ifndef KEYWORD_H
#define KEYWORD_H

#include "object.h"

namespace n_keyword {
	class Ckeyword :public Object
	{
	public:
		Ckeyword();
		int my_init(void *p=NULL);
	};
}

using namespace n_keyword;

#endif

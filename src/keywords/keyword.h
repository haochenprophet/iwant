#ifndef KEYWORD_H
#define KEYWORD_H

#include "object/object.h"

namespace n_keyword {
	class Ckeyword :public Object
	{
	public:
		Ckeyword();
		int my_init(void *p=nullptr);
	};
}

using namespace n_keyword;

#endif

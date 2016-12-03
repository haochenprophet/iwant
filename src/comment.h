#ifndef COMMENT_H
#define COMMENT_H

#include "object.h"

namespace n_comment {
	class Ccomment :public Object
	{
	public:
		Ccomment();
		int my_init(void *p=NULL);
	};
}

using namespace n_comment;

#endif

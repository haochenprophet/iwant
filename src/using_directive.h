#ifndef USING_DIRECTIVE_H
#define USING_DIRECTIVE_H

#include "object.h"

namespace n_using_directive {
	class Cusing_directive :public Object
	{
	public:
		Cusing_directive();
		int my_init(void *p=NULL);
	};
}

using namespace n_using_directive;

#endif

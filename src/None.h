#ifndef NONE_H
#define NONE_H

#include "object.h"

namespace n_None {
	class CNone :public Object
	{
	public:
		CNone();
		int my_init(void *p=NULL);
	};
}

using namespace n_None;

#endif

#ifndef TRUE_H
#define TRUE_H

#include "object.h"

namespace n_True {
	class CTrue :public Object
	{
	public:
		CTrue();
		int my_init(void *p=NULL);
	};
}

using namespace n_True;

#endif

#ifndef CLASS_H
#define CLASS_H

#include "object.h"

namespace n_class {
	class Cclass :public Object
	{
	public:
		Cclass();
		int func(void *p=NULL);
	};

}
using namespace n_class;

#endif

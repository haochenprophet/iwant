#ifndef ABSTRACT_H
#define ABSTRACT_H

#include "object.h"

namespace n_abstract {
	class Cabstract :public Object
	{
	public:
		Cabstract();
		int my_init(void *p=nullptr);
	};
}

using namespace n_abstract;

#endif

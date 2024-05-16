#ifndef ISSPACE_H
#define ISSPACE_H

#include "object/object.h"

namespace n_isspace {
	class Cisspace :public Object
	{
	public:
		Cisspace();
		~Cisspace();
		int my_init(void *p=nullptr);
	};
}

using namespace n_isspace;

#endif

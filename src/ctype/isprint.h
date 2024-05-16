#ifndef ISPRINT_H
#define ISPRINT_H

#include "object/object.h"

namespace n_isprint {
	class Cisprint :public Object
	{
	public:
		Cisprint();
		~Cisprint();
		int my_init(void *p=nullptr);
	};
}

using namespace n_isprint;

#endif

#ifndef FREXP_H
#define FREXP_H

#include "../object.h"

namespace n_frexp {
	class Cfrexp :public Object
	{
	public:
		Cfrexp();
		~Cfrexp();
		int my_init(void *p=nullptr);
	};
}

using namespace n_frexp;

#endif

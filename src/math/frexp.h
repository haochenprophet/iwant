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
		size_t my_size() { return sizeof(Cfrexp); }
	};
}

using namespace n_frexp;

#endif

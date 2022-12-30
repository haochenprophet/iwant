#ifndef NAN_H
#define NAN_H

#include "../object.h"

namespace n_nan {
	class Cnan :public Object
	{
	public:
		Cnan();
		~Cnan();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Cnan); }
	};
}

using namespace n_nan;

#endif

#ifndef TRUNC_H
#define TRUNC_H

#include "../object.h"

namespace n_trunc {
	class Ctrunc :public Object
	{
	public:
		Ctrunc();
		~Ctrunc();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Ctrunc); }
	};
}

using namespace n_trunc;

#endif

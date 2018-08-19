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
	};
}

using namespace n_trunc;

#endif

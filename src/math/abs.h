#ifndef ABS_H
#define ABS_H

#include "../object.h"

namespace n_abs {
	class Cabs :public Object
	{
	public:
		Cabs();
		~Cabs();
		int my_init(void *p=nullptr);
	};
}

using namespace n_abs;

#endif

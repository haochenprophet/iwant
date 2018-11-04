#ifndef CMATH_H
#define CMATH_H

#include "../object.h"

namespace n_cmath {
	class Ccmath :public Object
	{
	public:
		Ccmath();
		~Ccmath();
		int my_init(void *p=nullptr);
	};
}

using namespace n_cmath;

#endif

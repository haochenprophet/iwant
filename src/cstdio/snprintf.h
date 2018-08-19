#ifndef SNPRINTF_H
#define SNPRINTF_H

#include "../object.h"

namespace n_snprintf {
	class Csnprintf :public Object
	{
	public:
		Csnprintf();
		~Csnprintf();
		int my_init(void *p=nullptr);
	};
}

using namespace n_snprintf;

#endif

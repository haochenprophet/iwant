#ifndef VSNPRINTF_H
#define VSNPRINTF_H

#include "../object.h"

namespace n_vsnprintf {
	class Cvsnprintf :public Object
	{
	public:
		Cvsnprintf();
		~Cvsnprintf();
		int my_init(void *p=nullptr);
	};
}

using namespace n_vsnprintf;

#endif

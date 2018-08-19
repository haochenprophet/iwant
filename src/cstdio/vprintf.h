#ifndef VPRINTF_H
#define VPRINTF_H

#include "../object.h"

namespace n_vprintf {
	class Cvprintf :public Object
	{
	public:
		Cvprintf();
		~Cvprintf();
		int my_init(void *p=nullptr);
	};
}

using namespace n_vprintf;

#endif

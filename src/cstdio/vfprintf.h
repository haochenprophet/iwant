#ifndef VFPRINTF_H
#define VFPRINTF_H

#include "../object.h"

namespace n_vfprintf {
	class Cvfprintf :public Object
	{
	public:
		Cvfprintf();
		~Cvfprintf();
		int my_init(void *p=nullptr);
	};
}

using namespace n_vfprintf;

#endif

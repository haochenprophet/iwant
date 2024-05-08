#ifndef TOWUPPER_H
#define TOWUPPER_H

#include "../object.h"

namespace n_towupper {
	class Ctowupper :public Object
	{
	public:
		Ctowupper();
		~Ctowupper();
		int my_init(void *p=nullptr);
	};
}

using namespace n_towupper;

#endif

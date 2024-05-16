#ifndef TOUPPER_H
#define TOUPPER_H

#include "object/object.h"

namespace n_toupper {
	class Ctoupper :public Object
	{
	public:
		Ctoupper();
		~Ctoupper();
		int my_init(void *p=nullptr);
	};
}

using namespace n_toupper;

#endif

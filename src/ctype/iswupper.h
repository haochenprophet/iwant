#ifndef ISWUPPER_H
#define ISWUPPER_H

#include "object/object.h"

namespace n_iswupper {
	class Ciswupper :public Object
	{
	public:
		Ciswupper();
		~Ciswupper();
		int my_init(void *p=nullptr);
	};
}

using namespace n_iswupper;

#endif

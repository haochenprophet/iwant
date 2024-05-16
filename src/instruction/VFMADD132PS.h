#ifndef VFMADD132PS_H
#define VFMADD132PS_H

#include "object/object.h"

namespace n_VFMADD132PS {
	class CVFMADD132PS :public Object
	{
	public:
		CVFMADD132PS();
		~CVFMADD132PS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VFMADD132PS;

#endif

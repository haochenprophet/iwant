#ifndef VFNMADD132PS_H
#define VFNMADD132PS_H

#include "object/object.h"

namespace n_VFNMADD132PS {
	class CVFNMADD132PS :public Object
	{
	public:
		CVFNMADD132PS();
		~CVFNMADD132PS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VFNMADD132PS;

#endif

#ifndef VFMADD213PS_H
#define VFMADD213PS_H

#include "object/object.h"

namespace n_VFMADD213PS {
	class CVFMADD213PS :public Object
	{
	public:
		CVFMADD213PS();
		~CVFMADD213PS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VFMADD213PS;

#endif

#ifndef VFNMADD213PS_H
#define VFNMADD213PS_H

#include "object/object.h"

namespace n_VFNMADD213PS {
	class CVFNMADD213PS :public Object
	{
	public:
		CVFNMADD213PS();
		~CVFNMADD213PS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VFNMADD213PS;

#endif

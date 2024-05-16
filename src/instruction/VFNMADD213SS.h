#ifndef VFNMADD213SS_H
#define VFNMADD213SS_H

#include "object/object.h"

namespace n_VFNMADD213SS {
	class CVFNMADD213SS :public Object
	{
	public:
		CVFNMADD213SS();
		~CVFNMADD213SS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VFNMADD213SS;

#endif

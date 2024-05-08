#ifndef VFMADD213SS_H
#define VFMADD213SS_H

#include "../object.h"

namespace n_VFMADD213SS {
	class CVFMADD213SS :public Object
	{
	public:
		CVFMADD213SS();
		~CVFMADD213SS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VFMADD213SS;

#endif

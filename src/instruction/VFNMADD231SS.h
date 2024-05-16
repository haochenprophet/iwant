#ifndef VFNMADD231SS_H
#define VFNMADD231SS_H

#include "object/object.h"

namespace n_VFNMADD231SS {
	class CVFNMADD231SS :public Object
	{
	public:
		CVFNMADD231SS();
		~CVFNMADD231SS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VFNMADD231SS;

#endif

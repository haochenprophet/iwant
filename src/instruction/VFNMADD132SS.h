#ifndef VFNMADD132SS_H
#define VFNMADD132SS_H

#include "object.h"

namespace n_VFNMADD132SS {
	class CVFNMADD132SS :public Object
	{
	public:
		CVFNMADD132SS();
		~CVFNMADD132SS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VFNMADD132SS;

#endif

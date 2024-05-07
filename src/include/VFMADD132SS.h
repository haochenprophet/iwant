#ifndef VFMADD132SS_H
#define VFMADD132SS_H

#include "../object.h"

namespace n_VFMADD132SS {
	class CVFMADD132SS :public Object
	{
	public:
		CVFMADD132SS();
		~CVFMADD132SS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VFMADD132SS;

#endif

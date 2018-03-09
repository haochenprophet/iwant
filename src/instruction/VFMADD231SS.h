#ifndef VFMADD231SS_H
#define VFMADD231SS_H

#include "../object.h"

namespace n_VFMADD231SS {
	class CVFMADD231SS :public Object
	{
	public:
		CVFMADD231SS();
		~CVFMADD231SS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VFMADD231SS;

#endif

#ifndef VFMADD132SD_H
#define VFMADD132SD_H

#include "object.h"

namespace n_VFMADD132SD {
	class CVFMADD132SD :public Object
	{
	public:
		CVFMADD132SD();
		~CVFMADD132SD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VFMADD132SD;

#endif

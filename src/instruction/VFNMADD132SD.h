#ifndef VFNMADD132SD_H
#define VFNMADD132SD_H

#include "object/object.h"

namespace n_VFNMADD132SD {
	class CVFNMADD132SD :public Object
	{
	public:
		CVFNMADD132SD();
		~CVFNMADD132SD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VFNMADD132SD;

#endif

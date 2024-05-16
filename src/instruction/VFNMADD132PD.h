#ifndef VFNMADD132PD_H
#define VFNMADD132PD_H

#include "object/object.h"

namespace n_VFNMADD132PD {
	class CVFNMADD132PD :public Object
	{
	public:
		CVFNMADD132PD();
		~CVFNMADD132PD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VFNMADD132PD;

#endif

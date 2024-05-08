#ifndef VFMADD132PD_H
#define VFMADD132PD_H

#include "../object.h"

namespace n_VFMADD132PD {
	class CVFMADD132PD :public Object
	{
	public:
		CVFMADD132PD();
		~CVFMADD132PD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VFMADD132PD;

#endif

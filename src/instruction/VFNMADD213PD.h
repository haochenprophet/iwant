#ifndef VFNMADD213PD_H
#define VFNMADD213PD_H

#include "object.h"

namespace n_VFNMADD213PD {
	class CVFNMADD213PD :public Object
	{
	public:
		CVFNMADD213PD();
		~CVFNMADD213PD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VFNMADD213PD;

#endif

#ifndef VFMADD213PD_H
#define VFMADD213PD_H

#include "../object.h"

namespace n_VFMADD213PD {
	class CVFMADD213PD :public Object
	{
	public:
		CVFMADD213PD();
		~CVFMADD213PD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VFMADD213PD;

#endif

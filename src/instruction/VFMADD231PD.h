#ifndef VFMADD231PD_H
#define VFMADD231PD_H

#include "object.h"

namespace n_VFMADD231PD {
	class CVFMADD231PD :public Object
	{
	public:
		CVFMADD231PD();
		~CVFMADD231PD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VFMADD231PD;

#endif

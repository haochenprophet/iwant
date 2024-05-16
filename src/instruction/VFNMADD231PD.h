#ifndef VFNMADD231PD_H
#define VFNMADD231PD_H

#include "object/object.h"

namespace n_VFNMADD231PD {
	class CVFNMADD231PD :public Object
	{
	public:
		CVFNMADD231PD();
		~CVFNMADD231PD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VFNMADD231PD;

#endif

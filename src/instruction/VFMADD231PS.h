#ifndef VFMADD231PS_H
#define VFMADD231PS_H

#include "object/object.h"

namespace n_VFMADD231PS {
	class CVFMADD231PS :public Object
	{
	public:
		CVFMADD231PS();
		~CVFMADD231PS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VFMADD231PS;

#endif

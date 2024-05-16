#ifndef VFNMADD231PS_H
#define VFNMADD231PS_H

#include "object/object.h"

namespace n_VFNMADD231PS {
	class CVFNMADD231PS :public Object
	{
	public:
		CVFNMADD231PS();
		~CVFNMADD231PS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VFNMADD231PS;

#endif

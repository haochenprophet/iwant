#ifndef VFNMADD213SD_H
#define VFNMADD213SD_H

#include "object/object.h"

namespace n_VFNMADD213SD {
	class CVFNMADD213SD :public Object
	{
	public:
		CVFNMADD213SD();
		~CVFNMADD213SD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VFNMADD213SD;

#endif

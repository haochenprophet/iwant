#ifndef VFMADD213SD_H
#define VFMADD213SD_H

#include "../object.h"

namespace n_VFMADD213SD {
	class CVFMADD213SD :public Object
	{
	public:
		CVFMADD213SD();
		~CVFMADD213SD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VFMADD213SD;

#endif

#ifndef VFMADDSUB132PD_H
#define VFMADDSUB132PD_H

#include "object/object.h"

namespace n_VFMADDSUB132PD {
	class CVFMADDSUB132PD :public Object
	{
	public:
		CVFMADDSUB132PD();
		~CVFMADDSUB132PD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VFMADDSUB132PD;

#endif

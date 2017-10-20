#ifndef VFMADDSUB213PD_H
#define VFMADDSUB213PD_H

#include "object.h"

namespace n_VFMADDSUB213PD {
	class CVFMADDSUB213PD :public Object
	{
	public:
		CVFMADDSUB213PD();
		~CVFMADDSUB213PD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VFMADDSUB213PD;

#endif

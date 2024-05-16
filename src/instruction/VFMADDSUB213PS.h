#ifndef VFMADDSUB213PS_H
#define VFMADDSUB213PS_H

#include "object/object.h"

namespace n_VFMADDSUB213PS {
	class CVFMADDSUB213PS :public Object
	{
	public:
		CVFMADDSUB213PS();
		~CVFMADDSUB213PS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VFMADDSUB213PS;

#endif

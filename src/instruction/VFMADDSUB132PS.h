#ifndef VFMADDSUB132PS_H
#define VFMADDSUB132PS_H

#include "../object.h"

namespace n_VFMADDSUB132PS {
	class CVFMADDSUB132PS :public Object
	{
	public:
		CVFMADDSUB132PS();
		~CVFMADDSUB132PS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VFMADDSUB132PS;

#endif

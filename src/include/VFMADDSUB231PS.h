#ifndef VFMADDSUB231PS_H
#define VFMADDSUB231PS_H

#include "../object.h"

namespace n_VFMADDSUB231PS {
	class CVFMADDSUB231PS :public Object
	{
	public:
		CVFMADDSUB231PS();
		~CVFMADDSUB231PS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VFMADDSUB231PS;

#endif

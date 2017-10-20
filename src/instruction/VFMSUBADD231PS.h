#ifndef VFMSUBADD231PS_H
#define VFMSUBADD231PS_H

#include "object.h"

namespace n_VFMSUBADD231PS {
	class CVFMSUBADD231PS :public Object
	{
	public:
		CVFMSUBADD231PS();
		~CVFMSUBADD231PS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VFMSUBADD231PS;

#endif

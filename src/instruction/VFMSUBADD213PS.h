#ifndef VFMSUBADD213PS_H
#define VFMSUBADD213PS_H

#include "object/object.h"

namespace n_VFMSUBADD213PS {
	class CVFMSUBADD213PS :public Object
	{
	public:
		CVFMSUBADD213PS();
		~CVFMSUBADD213PS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VFMSUBADD213PS;

#endif

#ifndef VFMSUBADD132PS_H
#define VFMSUBADD132PS_H

#include "../object.h"

namespace n_VFMSUBADD132PS {
	class CVFMSUBADD132PS :public Object
	{
	public:
		CVFMSUBADD132PS();
		~CVFMSUBADD132PS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VFMSUBADD132PS;

#endif

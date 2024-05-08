#ifndef VFMSUB231PS_H
#define VFMSUB231PS_H

#include "../object.h"

namespace n_VFMSUB231PS {
	class CVFMSUB231PS :public Object
	{
	public:
		CVFMSUB231PS();
		~CVFMSUB231PS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VFMSUB231PS;

#endif

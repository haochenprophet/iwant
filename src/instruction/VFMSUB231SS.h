#ifndef VFMSUB231SS_H
#define VFMSUB231SS_H

#include "../object.h"

namespace n_VFMSUB231SS {
	class CVFMSUB231SS :public Object
	{
	public:
		CVFMSUB231SS();
		~CVFMSUB231SS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VFMSUB231SS;

#endif

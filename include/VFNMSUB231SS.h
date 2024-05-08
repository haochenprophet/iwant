#ifndef VFNMSUB231SS_H
#define VFNMSUB231SS_H

#include "../object.h"

namespace n_VFNMSUB231SS {
	class CVFNMSUB231SS :public Object
	{
	public:
		CVFNMSUB231SS();
		~CVFNMSUB231SS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VFNMSUB231SS;

#endif

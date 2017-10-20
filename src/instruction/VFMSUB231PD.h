#ifndef VFMSUB231PD_H
#define VFMSUB231PD_H

#include "object.h"

namespace n_VFMSUB231PD {
	class CVFMSUB231PD :public Object
	{
	public:
		CVFMSUB231PD();
		~CVFMSUB231PD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VFMSUB231PD;

#endif

#ifndef VFMSUB132PD_H
#define VFMSUB132PD_H

#include "object.h"

namespace n_VFMSUB132PD {
	class CVFMSUB132PD :public Object
	{
	public:
		CVFMSUB132PD();
		~CVFMSUB132PD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VFMSUB132PD;

#endif

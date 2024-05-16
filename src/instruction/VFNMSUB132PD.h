#ifndef VFNMSUB132PD_H
#define VFNMSUB132PD_H

#include "object/object.h"

namespace n_VFNMSUB132PD {
	class CVFNMSUB132PD :public Object
	{
	public:
		CVFNMSUB132PD();
		~CVFNMSUB132PD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VFNMSUB132PD;

#endif

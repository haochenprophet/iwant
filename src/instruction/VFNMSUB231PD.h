#ifndef VFNMSUB231PD_H
#define VFNMSUB231PD_H

#include "object.h"

namespace n_VFNMSUB231PD {
	class CVFNMSUB231PD :public Object
	{
	public:
		CVFNMSUB231PD();
		~CVFNMSUB231PD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VFNMSUB231PD;

#endif

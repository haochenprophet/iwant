#ifndef VFMSUBADD132PD_H
#define VFMSUBADD132PD_H

#include "object.h"

namespace n_VFMSUBADD132PD {
	class CVFMSUBADD132PD :public Object
	{
	public:
		CVFMSUBADD132PD();
		~CVFMSUBADD132PD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VFMSUBADD132PD;

#endif

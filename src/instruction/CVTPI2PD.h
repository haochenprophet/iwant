#ifndef CVTPI2PD_H
#define CVTPI2PD_H

#include "object/object.h"

namespace n_CVTPI2PD {
	class CCVTPI2PD :public Object
	{
	public:
		CCVTPI2PD();
		~CCVTPI2PD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_CVTPI2PD;

#endif

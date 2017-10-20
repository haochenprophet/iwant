#ifndef CVTDQ2PD_H
#define CVTDQ2PD_H

#include "object.h"

namespace n_CVTDQ2PD {
	class CCVTDQ2PD :public Object
	{
	public:
		CCVTDQ2PD();
		~CCVTDQ2PD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_CVTDQ2PD;

#endif

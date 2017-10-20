#ifndef VPERMT2PD_H
#define VPERMT2PD_H

#include "object.h"

namespace n_VPERMT2PD {
	class CVPERMT2PD :public Object
	{
	public:
		CVPERMT2PD();
		~CVPERMT2PD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VPERMT2PD;

#endif

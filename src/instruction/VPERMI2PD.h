#ifndef VPERMI2PD_H
#define VPERMI2PD_H

#include "object/object.h"

namespace n_VPERMI2PD {
	class CVPERMI2PD :public Object
	{
	public:
		CVPERMI2PD();
		~CVPERMI2PD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VPERMI2PD;

#endif

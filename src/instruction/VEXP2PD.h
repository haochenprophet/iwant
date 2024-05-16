#ifndef VEXP2PD_H
#define VEXP2PD_H

#include "object/object.h"

namespace n_VEXP2PD {
	class CVEXP2PD :public Object
	{
	public:
		CVEXP2PD();
		~CVEXP2PD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VEXP2PD;

#endif

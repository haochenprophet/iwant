#ifndef RCL_H
#define RCL_H

#include "object.h"

namespace n_RCL {
	class CRCL :public Object
	{
	public:
		CRCL();
		~CRCL();
		int my_init(void *p=nullptr);
	};
}

using namespace n_RCL;

#endif

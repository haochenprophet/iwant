#ifndef MOVHLPS_H
#define MOVHLPS_H

#include "object/object.h"

namespace n_MOVHLPS {
	class CMOVHLPS :public Object
	{
	public:
		CMOVHLPS();
		~CMOVHLPS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_MOVHLPS;

#endif

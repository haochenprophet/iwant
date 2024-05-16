#ifndef MOVHPS_H
#define MOVHPS_H

#include "object/object.h"

namespace n_MOVHPS {
	class CMOVHPS :public Object
	{
	public:
		CMOVHPS();
		~CMOVHPS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_MOVHPS;

#endif

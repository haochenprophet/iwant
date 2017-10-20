#ifndef MOVLPS_H
#define MOVLPS_H

#include "object.h"

namespace n_MOVLPS {
	class CMOVLPS :public Object
	{
	public:
		CMOVLPS();
		~CMOVLPS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_MOVLPS;

#endif

#ifndef MOVLHPS_H
#define MOVLHPS_H

#include "../object.h"

namespace n_MOVLHPS {
	class CMOVLHPS :public Object
	{
	public:
		CMOVLHPS();
		~CMOVLHPS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_MOVLHPS;

#endif

#ifndef MOVMSKPS_H
#define MOVMSKPS_H

#include "../object.h"

namespace n_MOVMSKPS {
	class CMOVMSKPS :public Object
	{
	public:
		CMOVMSKPS();
		~CMOVMSKPS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_MOVMSKPS;

#endif

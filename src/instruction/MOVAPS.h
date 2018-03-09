#ifndef MOVAPS_H
#define MOVAPS_H

#include "../object.h"

namespace n_MOVAPS {
	class CMOVAPS :public Object
	{
	public:
		CMOVAPS();
		~CMOVAPS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_MOVAPS;

#endif

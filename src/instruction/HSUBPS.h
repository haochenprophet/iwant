#ifndef HSUBPS_H
#define HSUBPS_H

#include "object.h"

namespace n_HSUBPS {
	class CHSUBPS :public Object
	{
	public:
		CHSUBPS();
		~CHSUBPS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_HSUBPS;

#endif

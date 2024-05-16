#ifndef ADDSUBPS_H
#define ADDSUBPS_H

#include "object/object.h"

namespace n_ADDSUBPS {
	class CADDSUBPS :public Object
	{
	public:
		CADDSUBPS();
		~CADDSUBPS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_ADDSUBPS;

#endif

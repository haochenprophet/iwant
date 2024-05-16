#ifndef SUBPS_H
#define SUBPS_H

#include "object/object.h"

namespace n_SUBPS {
	class CSUBPS :public Object
	{
	public:
		CSUBPS();
		~CSUBPS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_SUBPS;

#endif

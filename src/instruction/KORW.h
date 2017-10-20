#ifndef KORW_H
#define KORW_H

#include "object.h"

namespace n_KORW {
	class CKORW :public Object
	{
	public:
		CKORW();
		~CKORW();
		int my_init(void *p=nullptr);
	};
}

using namespace n_KORW;

#endif

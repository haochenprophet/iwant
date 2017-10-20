#ifndef KUNPCKWD_H
#define KUNPCKWD_H

#include "object.h"

namespace n_KUNPCKWD {
	class CKUNPCKWD :public Object
	{
	public:
		CKUNPCKWD();
		~CKUNPCKWD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_KUNPCKWD;

#endif

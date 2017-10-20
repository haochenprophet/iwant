#ifndef PSHUFW_H
#define PSHUFW_H

#include "object.h"

namespace n_PSHUFW {
	class CPSHUFW :public Object
	{
	public:
		CPSHUFW();
		~CPSHUFW();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PSHUFW;

#endif

#ifndef OUTSW_H
#define OUTSW_H

#include "object.h"

namespace n_OUTSW {
	class COUTSW :public Object
	{
	public:
		COUTSW();
		~COUTSW();
		int my_init(void *p=nullptr);
	};
}

using namespace n_OUTSW;

#endif

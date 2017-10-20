#ifndef PADDW_H
#define PADDW_H

#include "object.h"

namespace n_PADDW {
	class CPADDW :public Object
	{
	public:
		CPADDW();
		~CPADDW();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PADDW;

#endif

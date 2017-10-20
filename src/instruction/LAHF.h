#ifndef LAHF_H
#define LAHF_H

#include "object.h"

namespace n_LAHF {
	class CLAHF :public Object
	{
	public:
		CLAHF();
		~CLAHF();
		int my_init(void *p=nullptr);
	};
}

using namespace n_LAHF;

#endif

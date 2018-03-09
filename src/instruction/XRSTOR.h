#ifndef XRSTOR_H
#define XRSTOR_H

#include "../object.h"

namespace n_XRSTOR {
	class CXRSTOR :public Object
	{
	public:
		CXRSTOR();
		~CXRSTOR();
		int my_init(void *p=nullptr);
	};
}

using namespace n_XRSTOR;

#endif

#ifndef PMULDQ_H
#define PMULDQ_H

#include "object/object.h"

namespace n_PMULDQ {
	class CPMULDQ :public Object
	{
	public:
		CPMULDQ();
		~CPMULDQ();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PMULDQ;

#endif

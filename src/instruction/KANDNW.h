#ifndef KANDNW_H
#define KANDNW_H

#include "object.h"

namespace n_KANDNW {
	class CKANDNW :public Object
	{
	public:
		CKANDNW();
		~CKANDNW();
		int my_init(void *p=nullptr);
	};
}

using namespace n_KANDNW;

#endif

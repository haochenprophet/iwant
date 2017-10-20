#ifndef ANDN_H
#define ANDN_H

#include "object.h"

namespace n_ANDN {
	class CANDN :public Object
	{
	public:
		CANDN();
		~CANDN();
		int my_init(void *p=nullptr);
	};
}

using namespace n_ANDN;

#endif

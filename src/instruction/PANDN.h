#ifndef PANDN_H
#define PANDN_H

#include "object.h"

namespace n_PANDN {
	class CPANDN :public Object
	{
	public:
		CPANDN();
		~CPANDN();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PANDN;

#endif

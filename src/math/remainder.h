#ifndef REMAINDER_H
#define REMAINDER_H

#include "../object.h"

namespace n_remainder {
	class Cremainder :public Object
	{
	public:
		Cremainder();
		~Cremainder();
		int my_init(void *p=nullptr);
	};
}

using namespace n_remainder;

#endif

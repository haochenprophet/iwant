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
		size_t my_size() { return sizeof(Cremainder); }
	};
}

using namespace n_remainder;

#endif

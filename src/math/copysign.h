#ifndef COPYSIGN_H
#define COPYSIGN_H

#include "../object.h"

namespace n_copysign {
	class Ccopysign :public Object
	{
	public:
		Ccopysign();
		~Ccopysign();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Ccopysign); }
	};
}

using namespace n_copysign;

#endif

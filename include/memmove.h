#ifndef MEMMOVE_H
#define MEMMOVE_H

#include "../object.h"

namespace n_memmove {
	class Cmemmove :public Object
	{
	public:
		Cmemmove();
		~Cmemmove();
		int my_init(void *p=nullptr);
	};
}

using namespace n_memmove;

#endif

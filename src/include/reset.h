#ifndef RESET_H
#define RESET_H

#include "../object.h"

namespace n_reset {
	class Creset :public Object
	{
	public:
		Creset();
		~Creset();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Creset); }
	};
}

using namespace n_reset;

#endif

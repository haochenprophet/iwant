#ifndef LLABS_H
#define LLABS_H

#include "../object.h"

namespace n_llabs {
	class Cllabs :public Object
	{
	public:
		Cllabs();
		~Cllabs();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Cllabs); }
	};
}

using namespace n_llabs;

#endif

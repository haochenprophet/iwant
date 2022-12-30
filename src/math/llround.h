#ifndef LLROUND_H
#define LLROUND_H

#include "../object.h"

namespace n_llround {
	class Cllround :public Object
	{
	public:
		Cllround();
		~Cllround();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Cllround); }
	};
}

using namespace n_llround;

#endif

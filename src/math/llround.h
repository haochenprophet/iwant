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
	};
}

using namespace n_llround;

#endif

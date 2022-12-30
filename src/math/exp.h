#ifndef EXP_H
#define EXP_H

#include "../object.h"

namespace n_exp {
	class Cexp :public Object
	{
	public:
		Cexp();
		~Cexp();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Cexp); }
	};
}

using namespace n_exp;

#endif

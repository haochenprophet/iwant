#ifndef EXPM1_H
#define EXPM1_H

#include "../object.h"

namespace n_expm1 {
	class Cexpm1 :public Object
	{
	public:
		Cexpm1();
		~Cexpm1();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Cexpm1); }
	};
}

using namespace n_expm1;

#endif

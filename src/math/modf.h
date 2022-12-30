#ifndef MODF_H
#define MODF_H

#include "../object.h"

namespace n_modf {
	class Cmodf :public Object
	{
	public:
		Cmodf();
		~Cmodf();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Cmodf); }
	};
}

using namespace n_modf;

#endif

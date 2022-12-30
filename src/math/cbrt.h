#ifndef CBRT_H
#define CBRT_H

#include "../object.h"

namespace n_cbrt {
	class Ccbrt :public Object
	{
	public:
		Ccbrt();
		~Ccbrt();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Ccbrt); }
	};
}

using namespace n_cbrt;

#endif

#ifndef CSTDIO_H
#define CSTDIO_H

#include "../object.h"

namespace n_cstdio {
	class Ccstdio :public Object
	{
	public:
		Ccstdio();
		~Ccstdio();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Ccstdio); }
	};
}

using namespace n_cstdio;

#endif

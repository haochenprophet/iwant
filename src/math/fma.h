#ifndef FMA_H
#define FMA_H

#include "../object.h"

namespace n_fma {
	class Cfma :public Object
	{
	public:
		Cfma();
		~Cfma();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Cfma); }
	};
}

using namespace n_fma;

#endif

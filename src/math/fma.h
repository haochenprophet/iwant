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
	};
}

using namespace n_fma;

#endif

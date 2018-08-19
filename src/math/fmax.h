#ifndef FMAX_H
#define FMAX_H

#include "../object.h"

namespace n_fmax {
	class Cfmax :public Object
	{
	public:
		Cfmax();
		~Cfmax();
		int my_init(void *p=nullptr);
	};
}

using namespace n_fmax;

#endif

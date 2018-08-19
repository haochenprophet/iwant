#ifndef TGAMMA_H
#define TGAMMA_H

#include "../object.h"

namespace n_tgamma {
	class Ctgamma :public Object
	{
	public:
		Ctgamma();
		~Ctgamma();
		int my_init(void *p=nullptr);
	};
}

using namespace n_tgamma;

#endif

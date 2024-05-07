#ifndef STRICTFP_H
#define STRICTFP_H

#include "../object.h"

namespace n_strictfp {
	class Cstrictfp :public Object
	{
	public:
		Cstrictfp();
		int my_init(void *p=nullptr);
	};
}

using namespace n_strictfp;

#endif

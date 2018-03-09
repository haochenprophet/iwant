#ifndef FADDP_H
#define FADDP_H

#include "../object.h"

namespace n_FADDP {
	class CFADDP :public Object
	{
	public:
		CFADDP();
		~CFADDP();
		int my_init(void *p=nullptr);
	};
}

using namespace n_FADDP;

#endif

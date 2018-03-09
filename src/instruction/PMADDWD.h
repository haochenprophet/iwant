#ifndef PMADDWD_H
#define PMADDWD_H

#include "../object.h"

namespace n_PMADDWD {
	class CPMADDWD :public Object
	{
	public:
		CPMADDWD();
		~CPMADDWD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PMADDWD;

#endif

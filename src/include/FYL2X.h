#ifndef FYL2X_H
#define FYL2X_H

#include "../object.h"

namespace n_FYL2X {
	class CFYL2X :public Object
	{
	public:
		CFYL2X();
		~CFYL2X();
		int my_init(void *p=nullptr);
	};
}

using namespace n_FYL2X;

#endif

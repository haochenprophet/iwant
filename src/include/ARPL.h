#ifndef ARPL_H
#define ARPL_H

#include "../object.h"

namespace n_ARPL {
	class CARPL :public Object
	{
	public:
		CARPL();
		~CARPL();
		int my_init(void *p=nullptr);
	};
}

using namespace n_ARPL;

#endif

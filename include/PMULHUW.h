#ifndef PMULHUW_H
#define PMULHUW_H

#include "../object.h"

namespace n_PMULHUW {
	class CPMULHUW :public Object
	{
	public:
		CPMULHUW();
		~CPMULHUW();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PMULHUW;

#endif

#ifndef FRSTOR_H
#define FRSTOR_H

#include "../object.h"

namespace n_FRSTOR {
	class CFRSTOR :public Object
	{
	public:
		CFRSTOR();
		~CFRSTOR();
		int my_init(void *p=nullptr);
	};
}

using namespace n_FRSTOR;

#endif

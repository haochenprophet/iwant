#ifndef FNSTENV_H
#define FNSTENV_H

#include "../object.h"

namespace n_FNSTENV {
	class CFNSTENV :public Object
	{
	public:
		CFNSTENV();
		~CFNSTENV();
		int my_init(void *p=nullptr);
	};
}

using namespace n_FNSTENV;

#endif

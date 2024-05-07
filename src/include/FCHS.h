#ifndef FCHS_H
#define FCHS_H

#include "../object.h"

namespace n_FCHS {
	class CFCHS :public Object
	{
	public:
		CFCHS();
		~CFCHS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_FCHS;

#endif

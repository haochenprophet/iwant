#ifndef PMULLD_H
#define PMULLD_H

#include "../object.h"

namespace n_PMULLD {
	class CPMULLD :public Object
	{
	public:
		CPMULLD();
		~CPMULLD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PMULLD;

#endif

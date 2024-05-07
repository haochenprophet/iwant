#ifndef INCLUDE_H
#define INCLUDE_H

#include "../object.h"

namespace n_include {
	class Cinclude :public Object
	{
	public:
		Cinclude();
		int my_init(void *p=nullptr);
	};
}

using namespace n_include;

#endif

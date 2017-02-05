#ifndef SELECTANY_H
#define SELECTANY_H

#include "../object.h"

namespace n_selectany {
	class Cselectany :public Object
	{
	public:
		Cselectany();
		int my_init(void *p=nullptr);
	};
}

using namespace n_selectany;

#endif

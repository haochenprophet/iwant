#ifndef FABS_H
#define FABS_H

#include "../object.h"

namespace n_fabs {
	class Cfabs :public Object
	{
	public:
		Cfabs();
		~Cfabs();
		int my_init(void *p=nullptr);
	};
}

using namespace n_fabs;

#endif

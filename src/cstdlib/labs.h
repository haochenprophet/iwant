#ifndef LABS_H
#define LABS_H

#include "../object.h"

namespace n_labs {
	class Clabs :public Object
	{
	public:
		Clabs();
		~Clabs();
		int my_init(void *p=nullptr);
	};
}

using namespace n_labs;

#endif

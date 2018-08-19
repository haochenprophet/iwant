#ifndef ACOSH_H
#define ACOSH_H

#include "../object.h"

namespace n_acosh {
	class Cacosh :public Object
	{
	public:
		Cacosh();
		~Cacosh();
		int my_init(void *p=nullptr);
	};
}

using namespace n_acosh;

#endif

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
		size_t my_size() { return sizeof(Cacosh); }
	};
}

using namespace n_acosh;

#endif

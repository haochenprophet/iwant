#ifndef LOGB_H
#define LOGB_H

#include "../object.h"

namespace n_logb {
	class Clogb :public Object
	{
	public:
		Clogb();
		~Clogb();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Clogb); }
	};
}

using namespace n_logb;

#endif

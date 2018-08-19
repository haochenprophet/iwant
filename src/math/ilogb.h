#ifndef ILOGB_H
#define ILOGB_H

#include "../object.h"

namespace n_ilogb {
	class Cilogb :public Object
	{
	public:
		Cilogb();
		~Cilogb();
		int my_init(void *p=nullptr);
	};
}

using namespace n_ilogb;

#endif

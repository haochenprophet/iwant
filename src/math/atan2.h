#ifndef ATAN2_H
#define ATAN2_H

#include "../object.h"

namespace n_atan2 {
	class Catan2 :public Object
	{
	public:
		Catan2();
		~Catan2();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Catan2); }
	};
}

using namespace n_atan2;

#endif

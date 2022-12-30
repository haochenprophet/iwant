#ifndef ASIN_H
#define ASIN_H

#include "../object.h"

namespace n_asin {
	class Casin :public Object
	{
	public:
		Casin();
		~Casin();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Casin); }
	};
}

using namespace n_asin;

#endif

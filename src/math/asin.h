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
	};
}

using namespace n_asin;

#endif

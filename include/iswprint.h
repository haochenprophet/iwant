#ifndef ISWPRINT_H
#define ISWPRINT_H

#include "../object.h"

namespace n_iswprint {
	class Ciswprint :public Object
	{
	public:
		Ciswprint();
		~Ciswprint();
		int my_init(void *p=nullptr);
	};
}

using namespace n_iswprint;

#endif

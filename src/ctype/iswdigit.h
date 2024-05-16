#ifndef ISWDIGIT_H
#define ISWDIGIT_H

#include "object/object.h"

namespace n_iswdigit {
	class Ciswdigit :public Object
	{
	public:
		Ciswdigit();
		~Ciswdigit();
		int my_init(void *p=nullptr);
	};
}

using namespace n_iswdigit;

#endif

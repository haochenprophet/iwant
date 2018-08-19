#ifndef ISWXDIGIT_H
#define ISWXDIGIT_H

#include "../object.h"

namespace n_iswxdigit {
	class Ciswxdigit :public Object
	{
	public:
		Ciswxdigit();
		~Ciswxdigit();
		int my_init(void *p=nullptr);
	};
}

using namespace n_iswxdigit;

#endif

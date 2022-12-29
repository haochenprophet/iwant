#ifndef WCSTOMBS_H
#define WCSTOMBS_H

#include "../object.h"

namespace n_wcstombs {
	class Cwcstombs :public Object
	{
	public:
		Cwcstombs();
		~Cwcstombs();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Cwcstombs); }
	};
}

using namespace n_wcstombs;

#endif

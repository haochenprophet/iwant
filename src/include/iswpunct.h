#ifndef ISWPUNCT_H
#define ISWPUNCT_H

#include "../object.h"

namespace n_iswpunct {
	class Ciswpunct :public Object
	{
	public:
		Ciswpunct();
		~Ciswpunct();
		int my_init(void *p=nullptr);
	};
}

using namespace n_iswpunct;

#endif

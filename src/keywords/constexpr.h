#ifndef CONSTEXPR_H
#define CONSTEXPR_H

#include "object/object.h"

namespace n_constexpr {
	class Cconstexpr :public Object
	{
	public:
		Cconstexpr();
		int my_init(void *p=nullptr);
	};
}

using namespace n_constexpr;

#endif

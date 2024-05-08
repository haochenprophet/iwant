#ifndef ISWBLANK_H
#define ISWBLANK_H

#include "../object.h"

namespace n_iswblank {
	class Ciswblank :public Object
	{
	public:
		Ciswblank();
		~Ciswblank();
		int my_init(void *p=nullptr);
	};
}

using namespace n_iswblank;

#endif

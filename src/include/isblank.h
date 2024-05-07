#ifndef ISBLANK_H
#define ISBLANK_H

#include "../object.h"

namespace n_isblank {
	class Cisblank :public Object
	{
	public:
		Cisblank();
		~Cisblank();
		int my_init(void *p=nullptr);
	};
}

using namespace n_isblank;

#endif

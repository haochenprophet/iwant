#ifndef GETCHAR_H
#define GETCHAR_H

#include "../object.h"

namespace n_getchar {
	class Cgetchar :public Object
	{
	public:
		Cgetchar();
		~Cgetchar();
		int my_init(void *p=nullptr);
	};
}

using namespace n_getchar;

#endif

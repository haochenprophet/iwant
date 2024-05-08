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
		size_t my_size() { return sizeof(Cgetchar); }
		static int getchar_c(void);
	};
}

using namespace n_getchar;

#endif

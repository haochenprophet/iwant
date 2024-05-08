#ifndef CHAR_H
#define CHAR_H

#include "../object.h"

namespace n_char {
	class Cchar :public Object
	{
	public:
		Cchar();
		int my_init(void *p=nullptr);
	};
}

using namespace n_char;

#endif

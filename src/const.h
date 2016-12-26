#ifndef CONST_H
#define CONST_H

#include "object.h"

namespace n_const {
	class Cconst :public Object
	{
	public:
		Cconst();
		int my_init(void *p=nullptr);
		static bool isHex(char *cp);
		static bool isDec(char *cp);
	};
}

using namespace n_const;

#endif

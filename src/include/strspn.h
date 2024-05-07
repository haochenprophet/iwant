#ifndef STRSPN_H
#define STRSPN_H

#include "../object.h"

namespace n_strspn {
	class Cstrspn :public Object
	{
	public:
		Cstrspn();
		~Cstrspn();
		int my_init(void *p=nullptr);
	};
}

using namespace n_strspn;

#endif

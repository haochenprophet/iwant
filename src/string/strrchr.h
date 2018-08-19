#ifndef STRRCHR_H
#define STRRCHR_H

#include "../object.h"

namespace n_strrchr {
	class Cstrrchr :public Object
	{
	public:
		Cstrrchr();
		~Cstrrchr();
		int my_init(void *p=nullptr);
	};
}

using namespace n_strrchr;

#endif

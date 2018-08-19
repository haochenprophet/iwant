#ifndef ACOS_H
#define ACOS_H

#include "../object.h"

namespace n_acos {
	class Cacos :public Object
	{
	public:
		Cacos();
		~Cacos();
		int my_init(void *p=nullptr);
	};
}

using namespace n_acos;

#endif

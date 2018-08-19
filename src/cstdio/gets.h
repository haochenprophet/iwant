#ifndef GETS_H
#define GETS_H

#include "../object.h"

namespace n_gets {
	class Cgets :public Object
	{
	public:
		Cgets();
		~Cgets();
		int my_init(void *p=nullptr);
	};
}

using namespace n_gets;

#endif

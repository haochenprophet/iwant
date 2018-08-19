#ifndef FREE_H
#define FREE_H

#include "../object.h"

namespace n_free {
	class Cfree :public Object
	{
	public:
		Cfree();
		~Cfree();
		int my_init(void *p=nullptr);
	};
}

using namespace n_free;

#endif

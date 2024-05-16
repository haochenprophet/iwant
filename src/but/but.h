#ifndef BUT_H
#define BUT_H

#include "object/object.h"

namespace n_but {
	class Cbut :public Object
	{
	public:
		Cbut();
		~Cbut();
		int my_init(void *p=nullptr);
	};
}

using namespace n_but;

#endif

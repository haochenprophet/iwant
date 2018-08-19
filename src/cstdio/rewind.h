#ifndef REWIND_H
#define REWIND_H

#include "../object.h"

namespace n_rewind {
	class Crewind :public Object
	{
	public:
		Crewind();
		~Crewind();
		int my_init(void *p=nullptr);
	};
}

using namespace n_rewind;

#endif

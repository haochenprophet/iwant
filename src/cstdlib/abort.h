#ifndef ABORT_H
#define ABORT_H

#include "../object.h"

namespace n_abort {
	class Cabort :public Object
	{
	public:
		Cabort();
		~Cabort();
		int my_init(void *p=nullptr);
	};
}

using namespace n_abort;

#endif

#ifndef REMOVE_H
#define REMOVE_H

#include "../object.h"

namespace n_remove {
	class Cremove :public Object
	{
	public:
		Cremove();
		~Cremove();
		int my_init(void *p=nullptr);
	};
}

using namespace n_remove;

#endif

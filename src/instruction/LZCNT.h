#ifndef LZCNT_H
#define LZCNT_H

#include "object/object.h"

namespace n_LZCNT {
	class CLZCNT :public Object
	{
	public:
		CLZCNT();
		~CLZCNT();
		int my_init(void *p=nullptr);
	};
}

using namespace n_LZCNT;

#endif

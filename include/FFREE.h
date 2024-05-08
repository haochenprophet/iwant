#ifndef FFREE_H
#define FFREE_H

#include "../object.h"

namespace n_FFREE {
	class CFFREE :public Object
	{
	public:
		CFFREE();
		~CFFREE();
		int my_init(void *p=nullptr);
	};
}

using namespace n_FFREE;

#endif

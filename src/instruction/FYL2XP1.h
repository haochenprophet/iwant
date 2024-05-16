#ifndef FYL2XP1_H
#define FYL2XP1_H

#include "object/object.h"

namespace n_FYL2XP1 {
	class CFYL2XP1 :public Object
	{
	public:
		CFYL2XP1();
		~CFYL2XP1();
		int my_init(void *p=nullptr);
	};
}

using namespace n_FYL2XP1;

#endif

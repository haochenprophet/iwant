#ifndef INVLPG_H
#define INVLPG_H

#include "object.h"

namespace n_INVLPG {
	class CINVLPG :public Object
	{
	public:
		CINVLPG();
		~CINVLPG();
		int my_init(void *p=nullptr);
	};
}

using namespace n_INVLPG;

#endif

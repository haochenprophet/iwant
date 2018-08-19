#ifndef FTELL_H
#define FTELL_H

#include "../object.h"

namespace n_ftell {
	class Cftell :public Object
	{
	public:
		Cftell();
		~Cftell();
		int my_init(void *p=nullptr);
	};
}

using namespace n_ftell;

#endif

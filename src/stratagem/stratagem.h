#ifndef STRATAGEM_H
#define STRATAGEM_H

#include "object/object.h"

namespace n_stratagem {
	class Cstratagem :public Object
	{
	public:
		Cstratagem();
		~Cstratagem();
		int my_init(void *p=nullptr);
	};
}

using namespace n_stratagem;

#endif

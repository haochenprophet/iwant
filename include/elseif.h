#ifndef ELSEIF_H
#define ELSEIF_H

#include "../object.h"

namespace n_elseif {
	class Celseif :public Object
	{
	public:
		Celseif();
		int my_init(void *p=nullptr);
	};
}

using namespace n_elseif;

#endif

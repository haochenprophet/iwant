#ifndef ENDWHILE_H
#define ENDWHILE_H

#include "object.h"

namespace n_endwhile {
	class Cendwhile :public Object
	{
	public:
		Cendwhile();
		int my_init(void *p=NULL);
	};
}

using namespace n_endwhile;

#endif

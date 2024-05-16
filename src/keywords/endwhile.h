#ifndef ENDWHILE_H
#define ENDWHILE_H

#include "object/object.h"

namespace n_endwhile {
	class Cendwhile :public Object
	{
	public:
		Cendwhile();
		int my_init(void *p=nullptr);
	};
}

using namespace n_endwhile;

#endif

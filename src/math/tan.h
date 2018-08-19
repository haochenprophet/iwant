#ifndef TAN_H
#define TAN_H

#include "../object.h"

namespace n_tan {
	class Ctan :public Object
	{
	public:
		Ctan();
		~Ctan();
		int my_init(void *p=nullptr);
	};
}

using namespace n_tan;

#endif

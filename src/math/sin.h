#ifndef SIN_H
#define SIN_H

#include "../object.h"

namespace n_sin {
	class Csin :public Object
	{
	public:
		Csin();
		~Csin();
		int my_init(void *p=nullptr);
	};
}

using namespace n_sin;

#endif

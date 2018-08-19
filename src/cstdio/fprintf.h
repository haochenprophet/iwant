#ifndef FPRINTF_H
#define FPRINTF_H

#include "../object.h"

namespace n_fprintf {
	class Cfprintf :public Object
	{
	public:
		Cfprintf();
		~Cfprintf();
		int my_init(void *p=nullptr);
	};
}

using namespace n_fprintf;

#endif

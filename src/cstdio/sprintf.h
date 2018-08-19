#ifndef SPRINTF_H
#define SPRINTF_H

#include "../object.h"

namespace n_sprintf {
	class Csprintf :public Object
	{
	public:
		Csprintf();
		~Csprintf();
		int my_init(void *p=nullptr);
	};
}

using namespace n_sprintf;

#endif

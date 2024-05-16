#ifndef ISALPHA_H
#define ISALPHA_H

#include "object/object.h"

namespace n_isalpha {
	class Cisalpha :public Object
	{
	public:
		Cisalpha();
		~Cisalpha();
		int my_init(void *p=nullptr);
	};
}

using namespace n_isalpha;

#endif

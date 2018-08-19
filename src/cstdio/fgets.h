#ifndef FGETS_H
#define FGETS_H

#include "../object.h"

namespace n_fgets {
	class Cfgets :public Object
	{
	public:
		Cfgets();
		~Cfgets();
		int my_init(void *p=nullptr);
	};
}

using namespace n_fgets;

#endif

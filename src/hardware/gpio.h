#ifndef GPIO_H
#define GPIO_H

#include "../object.h"

namespace n_gpio {
	class Cgpio :public Object
	{
	public:
		Cgpio();
		~Cgpio();
		int my_init(void *p=nullptr);
	};
}

using namespace n_gpio;

#endif

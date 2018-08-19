#ifndef ISUPPER_H
#define ISUPPER_H

#include "../object.h"

namespace n_isupper {
	class Cisupper :public Object
	{
	public:
		Cisupper();
		~Cisupper();
		int my_init(void *p=nullptr);
	};
}

using namespace n_isupper;

#endif

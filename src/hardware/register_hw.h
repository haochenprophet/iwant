#ifndef REGISTER_HW_H
#define REGISTER_HW_H

#include "../object.h"

namespace n_register_hw {
	class Cregister_hw :public Object
	{
	public:
		Cregister_hw();
		~Cregister_hw();
		int my_init(void *p=nullptr);
	};
}

using namespace n_register_hw;

#endif

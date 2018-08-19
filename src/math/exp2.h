#ifndef EXP2_H
#define EXP2_H

#include "../object.h"

namespace n_exp2 {
	class Cexp2 :public Object
	{
	public:
		Cexp2();
		~Cexp2();
		int my_init(void *p=nullptr);
	};
}

using namespace n_exp2;

#endif

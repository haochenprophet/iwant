#ifndef ATANH_H
#define ATANH_H

#include "../object.h"

namespace n_atanh {
	class Catanh :public Object
	{
	public:
		Catanh();
		~Catanh();
		int my_init(void *p=nullptr);
	};
}

using namespace n_atanh;

#endif

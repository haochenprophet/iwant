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
		size_t my_size() { return sizeof(Catanh); }
	};
}

using namespace n_atanh;

#endif

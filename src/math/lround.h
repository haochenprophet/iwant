#ifndef LROUND_H
#define LROUND_H

#include "../object.h"

namespace n_lround {
	class Clround :public Object
	{
	public:
		Clround();
		~Clround();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Clround); }
	};
}

using namespace n_lround;

#endif

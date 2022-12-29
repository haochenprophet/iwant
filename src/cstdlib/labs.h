#ifndef LABS_H
#define LABS_H

#include "../object.h"

namespace n_labs {
	class Clabs :public Object
	{
	public:
		Clabs();
		~Clabs();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Clabs); }
	};
}

using namespace n_labs;

#endif

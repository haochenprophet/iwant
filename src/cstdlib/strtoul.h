#ifndef STRTOUL_H
#define STRTOUL_H

#include "../object.h"

namespace n_strtoul {
	class Cstrtoul :public Object
	{
	public:
		Cstrtoul();
		~Cstrtoul();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Cstrtoul); }
	};
}

using namespace n_strtoul;

#endif

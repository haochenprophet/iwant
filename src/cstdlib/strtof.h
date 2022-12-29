#ifndef STRTOF_H
#define STRTOF_H

#include "../object.h"

namespace n_strtof {
	class Cstrtof :public Object
	{
	public:
		Cstrtof();
		~Cstrtof();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Cstrtof); }
	};
}

using namespace n_strtof;

#endif
